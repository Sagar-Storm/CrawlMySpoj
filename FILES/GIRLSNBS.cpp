 #include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int b, g;
	cin>>b>>g;
	if(!(b==-1 && g==-1))
	
	while(1)
	{
		long long int GR,larger;
		if(b==0 && g==0)
			cout<<"0"<<endl;
			
		if(b || g)
		if(b==g)
		{
			cout<<"1"<<endl;
			
		}
		
		if(b>g)
		{
		  cout<<ceil(b/(g+1.0))<<endl;
		}
		
		if(g>b)
		cout<<ceil((g)/(b+1.0))<<endl;
		
	 
		
		cin>>b>>g;
		if(b==-1 && g==-1)
			break;
	}
}
		