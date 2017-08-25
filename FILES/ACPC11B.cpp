#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,n1;
	    cin>>n; 
	    int a[n];
	    int tt=n;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>n1;
	    int a2[n1];
	    for(int i=0;i<n1;i++)
	    {
	        cin>>a2[i];
	    }
	    
	 
	    map<int, int> m;
	   int temp,minimum=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n1;j++)
	        {
	            temp=abs(a[i]-a2[j]);
	            if(temp>=0 && minimum>temp)
	                minimum=temp;
	            
	                
	        }
	            
	    }
	    cout<<minimum<<endl;
	    
	}
	return 0;
}
