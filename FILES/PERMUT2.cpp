#include<iostream>
#include<string>

using namespace std;

int main()
{	
	long long int n;
		cin>>n;
	while(1)
	{
		
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		int flag=0;
		for(int i=0;i<n;i++)
		{
			 int temp=a[i];
			 int tobecompard=i+1;
			 int value=a[temp-1];
			 if(value!=tobecompard){
			  	flag=1;
			  	break;
			  	}
			  	
		}
		if(flag)
		cout<<"not ambiguous"<<endl;
		else
		cout<<"ambiguous"<<endl;
		cin>>n;
		if(n==0)
		break;
	}
	
}