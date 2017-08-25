 #include<iostream>
 #include<math.h>
 #include<iomanip>
 const double PI  =3.141592653589793238463;
 
 using namespace std;
 int main()
 {
 
  long long int l;
  cin>>l;
  
 	while(1)
 	{
 		 
 		double radius;
 	 	radius=l/PI;
 		double area=(radius*radius*PI)/2;
 		 cout << fixed << showpoint;
		 cout << setprecision(2);
	 		cout<<area<<endl;
 		cin>>l;
 		if(l==0)
 		break;
 	}
 	
 }	
 		