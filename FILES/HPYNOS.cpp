  #include<iostream>
 #include<math.h>
 #include<iomanip>
 #include<bits/stdc++.h>
 #include<string.h>
 #include<string>

 
 using namespace std;
 void happynumber(long long int n)
;  
 
 
 
 int main()
 {
 	
  long  int n;
  cin>>n;
  
  happynumber(n);
 		
 }
 
 void happynumber(long long int n)

{
	long long int sum=0;
	int i=0;
	long long int count=0;
	long long int temp;
	set<int> st;
	
		while(1)
		
		{
		 
		
		
		 	while(n){
		 		long long int t;
		 		t=n%10;
		 		
		 		sum+=(t*t);
		 	 
		 		
		 		n=n/10;
		 		
		 	 }
		 	 n=sum;
		 	 sum=0;
		 	 
		 	 
		 	
		 	
		 	 count++;
		 
		 	 if(n==1)
		 	  {
		 	  	cout<<count<<endl;
				break;
				}
				
				 if (st.find(n) != st.end())
             
			 
		 	  
		 	 
		 	  
		 	 		{
		 	 			cout<<"-1"<<endl;
		 	 			break;
		 	 		}
		 	 		st.insert(n);
		 	 		  
		   
		  
		 
		 	 
		 	  
		 		 	
		 		 	
			
		}
}

 
  