 #include<iostream>
#include<math.h>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main()
{
	ll attackers, defenders;
	cin>>attackers>>defenders;
	 
	while(1)
	{
 
	
	ll *a=new ll[attackers];
	ll *d=new ll[defenders];
	
	for(int i=0;i<attackers;i++)
	{
		cin>>a[i];
 	}
	for(int i=0;i<defenders;i++)
	{
		cin>>d[i];
 
	}
	
	
	sort(a,a+attackers);
	sort(d,d+defenders);
	
	int flag=0;
	/*	for(int i=0;i<attackers;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<defenders;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	*/
	for(int i=0;i<attackers;i++)
	{
		if(a[i]<d[1]  )
		{
			cout<<"Y"<<endl;
			flag=1;
			break;
			}
		
	}
	
	if(!flag)
		cout<<"N"<<endl;
		
		cin>>attackers>>defenders;
		
		if(attackers ==0 && defenders ==0)
			break;
	}
		
	}
	