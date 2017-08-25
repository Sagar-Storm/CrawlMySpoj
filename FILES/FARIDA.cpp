 #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	int count=0;
	while(t--)
	{
	    count++;
	    int n;
	    cin>>n;
	    if(n==0){
	        	   cout<<"Case "<<count<<": "<<"0"<<endl;continue;}

	        
	    long long int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	 long long int dp[n];
	  dp[0]=a[0];
	long long  int maximum=dp[0];
	  for(long long int i=1;i<n;i++)
	  {
	      dp[i]=a[i]+(i-2<0?0:dp[i-2]);
	      if(dp[i]>maximum)
	        maximum=dp[i];
	        else
	        dp[i]=maximum;
	        
	   //     cout<<dp[i]<<endl;
	  }
	   cout<<"Case "<<count<<": "<<maximum<<endl;
	}
	return 0;
}
