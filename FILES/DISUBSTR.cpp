 // A C++ program to find the count of distinct substring
// of a string using trie data structure
#include <bits/stdc++.h>
#define MAX_CHAR 26
using namespace std;
int LCP(string &s1,string &s2)
{
   // cout<<"functoin called"<<endl;
    int i=0,j;
    int count=0;
    while(i<s1.length() && i<s2.length())
    {
        if(s1.at(i)==s2.at(i))
            {
                i++;count++;}
            else
            break;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
   // cin.ignore();
    while(t--)
    {
        string str;
	   cin>>str;
	   int length=str.length();
	    string s[length];
	    for(int i=0;i<length;i++)
	   {
	       s[i]=str.substr(i);
	   } 
	   
	   int size=sizeof(s)/sizeof(s[0]);
	   sort(s,s+size);
	 /*  for(int i=0;i<length;i++)
	   {
	       cout<<s[i]<<endl;
	   }*/
	   
	   int ans=s[0].length();
	  for(int i=1;i<length;i++)
	   {
	       int lcp=LCP(s[i],s[i-1]);
	       ans+=s[i].length()-lcp;
	   }
	  
	   cout<<ans<<endl;
	    
	   
    }
	return 0;
}
