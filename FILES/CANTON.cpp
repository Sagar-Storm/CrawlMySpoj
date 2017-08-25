 #include<iostream>
#include<math.h>
#include<map>
#include<string>

using namespace std;
typedef long long int ll;
  int main()
 {
 	int t;
 	string temp;
 	cin>>t;
	 while(t--)
	 {
	 long i=1,j=1,k=1;
	 long n;
	 cin>>n;
	 
	 while(k<n)
	 {
	 j++,k++;
	 if(k==n)
	 	break;
	 	
	 	while(j>1 && k<n)
	 		j--,k++,i++;
	 		if(k==n)
	 			break;
	 	
	 	i++,k++;
	 	if(k==n)
	 		break;
	 		while(i>1 && k<n)
	 			i--,j++,k++;
	 			
	 			if(k==n)
	 				break;
	 }
	 
	 cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
	 
	 
	 
	 }
	 
	 
 	 
 	
 }
 			
 			
 		
 	
 		
 		
 		