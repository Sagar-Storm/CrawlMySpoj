        #include<iostream>
#include<math.h>
#include<string>
#include<string.h>



using namespace std;
void multiply(string &);

int main()
{
	string n;
			
		while((cin>>n))
		{
			  if(n=="0")
			  	{
			  		cout<<0<<endl;
			  	continue;
			  	}
			  	if(n=="1")
			  	{
			  		cout<<1<<endl;
			  		continue;
			  	}
			  	
		        multiply(n);
				
			 
				
				
				
		}
		
		return 0;
		
		
}

void multiply(string &n)
{
        int res[110],carry=0,temp,flag=0;
        int siz=n.length();
    //    cout<<"Function called "<<endl;
        
        for(int i=siz-1,k=0;i>=0;--i,k++)
        {
            temp=(n[i]-48)*2+carry;
            res[k]=temp%10;
            carry=temp/10;
        }
        
        while(carry)
        {
            res[siz]=carry%10;
            carry=carry/10;
            siz++;
            
        }
        
      //  cout<<"The final string is"<<endl;
    
        
       //  for(int i=siz-1;i>=0;i--)
        // {
         //    cout<<res[i];
         //}
         
          
         char tempp[110];
         int k=0;
         flag=1;
         
          
          for(int i=0,c=0;i<=siz-1;i++,k++)
         {
         		
              int a=res[i];
            //  cout<<"a is "<<a<<endl;
            int b;
            if(flag==1)
            	b=2;
            	else
            	b=0;
            //cout<<"b is "<<b<<endl;
            
              if(a<b+c)
              {
                  tempp[k]=(10+a-b-c)+48;
                  c=1;
              }
              else
              {
                  tempp[k]=a-b-c+48;
              //    cout<<"the char"<<tempp[k]<<endl;
                  c=0;
              }
              
              flag=0;
              
              
              
              
         }
         
         tempp[k]=0;
         flag=1;
        // cout<<"the string "<<tempp<<endl;
         for(int i=strlen(tempp)-1;i>=0;i--)
         {
         	if(tempp[i]=='0')
         	 	if(flag)
         			continue;
         		
                cout<<tempp[i];
                	flag=0;
               
         }
         cout<<endl;
         
         
         
        
}