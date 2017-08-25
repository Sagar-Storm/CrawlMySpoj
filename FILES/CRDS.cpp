  #include<iostream>
 #include<algorithm>
 
 #include<bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
 long long 	int t;
 	cin>>t;
 	
 	while(t--)
 	{
 		long long int  n;
 		cin>>n;
 		
 		
 		long long int sum=0;
 		 
 		
 
 		sum=  ((n-1)*1.0/2)*((2*3)+((n-2)*3));
 	
 	 
 		sum+=(n*2);
 		cout<<sum%1000007<<endl;
 		
 	}
 	
 }