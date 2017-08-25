 #include<iostream>
 #include<math.h>
 #include<iomanip>
 
 using namespace std;
 
 int main()
 {
 	
 		long int t;
 		cin>>t;
 		long int i=1;
 		while(t--)
 		{
 				long long int rad;
 				long	double result;
 				cin>>rad;
 				result=4*rad*rad+0.25;
 				  std::cout << std::setprecision(2) << std::fixed;
 				cout<<"Case "<<i++<<": "<<result<<endl;
 				
 		}
 		return 0;
 		
 }