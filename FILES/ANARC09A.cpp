  #include<bits/stdc++.h>
using namespace std;

void makeitstable(string &s)
{
 
    int length=s.length();
    char stack[2005];
    int top=0;
    int count=0;
    
    for(int i=0;i<length;i++)
    {
     if(s[i]=='{')
        stack[++top]=s[i];
    else if(top!=-1 && stack[top]=='{')
        --top;
    else 
    {
        count++;
        stack[++top]='{';
    }
    
    }
    
    count+=(top)/2;
    cout<<count<<endl;
    
    
        
     
        
        
    }
    
    
    
    
    
int main() {
	// your code goes here
	string s;
	cin>>s;
	int i=1;
	if(!(s.find('-')!=std::string::npos))
	while(1)
	{
	    
	  
	    cout<<i<<"."<<" ";
	    makeitstable(s);
	    cin>>s;
	   
	    i++;
	    if(s.find('-')!=std::string::npos)
	        break;
	    
	}
	return 0;
}
