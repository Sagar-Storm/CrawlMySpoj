 #include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
typedef long long int ll;
 
 

 
int main() {
	// your code goes here
	ll n;
    cin>>n;
    
    while(n--)
    {
        ll number;
        cin>>number;
        cin.ignore();
        string s[number];
        int flag=0;
        for(int i=0;i<number;i++)
        {
            getline(cin,s[i]);
            
        }
        int num=sizeof(s)/sizeof(s[0]);
       sort(s,s+num);
      //   for(int i=0;i<number;i++)
        //{
          // cout<<s[i]<<endl; 
        //}
       for(int i=0;i<number-1;i++)
       {
           int length=s[i].length();
          // cout<<"length is "<<length;
           string sub=s[i+1].substr(0,length);
           //cout<<"substringis"<<sub<<endl;
           if(s[i]==sub)
                {
                    flag=1;
                    break;
                }
           
           
       }
       if(flag==1)
       cout<<"NO"<<endl;
       if(flag==0)
        cout<<"YES"<<endl;
       
    }
        
    }
        
    
      
    
    
	
 
