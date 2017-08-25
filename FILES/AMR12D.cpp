   #include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
  
int main()
{
     ll t;
    cin>>t;
    
     while(t--)
     {
     string s;
     cin>>s;
     string rev=s;
     reverse(s.begin(),s.end());
        
         
        if(s==rev)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        
        
    
        
        
 
         
     
     
}
}