import os
import scrapy

base_url = 'http://www.spoj.com'

class SpojSpider(scrapy.Spider):
    name = 'spoj-spider'
    start_urls = ['http://www.spoj.com/login']

    current_path = os.getcwd()
    directory_path = os.path.join(current_path,"FILES")
 

    if not os.path.exists(directory_path):
        print('creating folder')
        os.makedirs("FILES")

    def parse(self, response):
        username = input("Enter the username:\n")
        password = input("Enter the password:\n") 
        return scrapy.FormRequest.from_response(
            response,
            formdata={'login_user': username, 'password': password },
            callback=self.after_login
        )

    def after_login(self, response):
        if str.encode('Authentication failed!') in response.body:
            print ('Oops, wrong credentials')
            return          

        handle = response.css("ul.dropdown-menu a[href*=status]::attr(href)").extract_first()
        handle = handle.split("/")[-1]
        return scrapy.Request(url = "http://www.spoj.com/myaccount/", callback = self.parse_data, meta = {"handle":handle})           

    def parse_data(self, response):
        handle = response.meta["handle"]

        problem_links = response.css("a[href*=status]::attr(href)").extract()
        exclude_str = '/status/,%s/'%handle
        
        solution_links = [base_url + solution for solution in problem_links[3:] if solution != exclude_str]

        for link in solution_links:
            yield scrapy.Request(url = link, callback = self.filter_accepted) 
    
    def filter_accepted(self, response):
        problem_title = response.css('tr.kol1 > td.sproblem > a::attr(title)').extract_first()
        problem_accepted = response.css('tr.kol1 td.statusres strong::text').extract_first()
        problem_language = response.css('tr.kol1 > td.slang > span::text').extract_first()

        if problem_accepted == 'accepted' :
            download_url = response.css('tr.kol1 > td > a::attr(data-url)').extract_first()
            download_url = base_url + download_url 

            yield scrapy.Request(url = download_url, callback = self.download_solution, meta = {
                'title': problem_title, 
                'language' : problem_language,
            } )

    def download_solution(self, response):
        title = response.meta['title']
        language = response.meta['language']

        download_url = response.css('div.head a::attr(href)').extract_first()
        download_url = "http://www.spoj.com" + download_url 

        return scrapy.Request(url = download_url, callback = self.save_file, meta = {"language": language,"title": title } )

    def save_file(self, response):
        language = response.meta['language']
        title = response.meta['title']

        if language == 'C++':
            extension = 'cpp'
        elif language == 'CPP14':
            extension = 'cpp'
        elif language == 'JAVA':
            extension = 'java'
        elif language == 'PYTHON' or language == 'PYTHON3':
            extension = 'py'
        else:
            extension = 'cpp'
        
        f = open(os.path.join(self.directory_path, title+'.'+extension), 'wb')
        f.write(response.body)
        f.close()


         



