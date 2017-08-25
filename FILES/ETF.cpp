 #include<iostream>
#include<math.h>

using namespace std;
void phiof(int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		 phiof(n);
	}
	
}

void phiof(int n)
{
	int 	result=n;
	
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
		
		while(n%i==0)
			n/=i;
		result-=result/i;
		}
	}
	
	if(n>1)
		result-=result/n;
		
	cout<<result<<endl;
}