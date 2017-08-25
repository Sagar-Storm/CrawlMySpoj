  #include<iostream>
 #include<bits/stdc++.h>
 typedef long long int LL;
 
 using namespace std;
 
 
 int main()
 {
 LL n;
 	cin>>n;
 	while(1)
 	{
 		
 		 
 		
 		LL sum=1;
 		LL i=0;
 		while(sum!=n)
 		{
 			sum+=(6*i);
 			++i;
 			if(sum>n)
 				break;
 		}
 		
 		if(sum==n)
 			cout<<"Y"<<endl;
 			else
 			cout<<"N"<<endl;
 			
 			cin>>n;
 			if(n==-1)
 				break;
 			
 	}
 	
 }
 
 			
 		
 		
 		
 	