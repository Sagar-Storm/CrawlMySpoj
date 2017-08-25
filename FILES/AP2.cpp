  #include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
 int main()
{

 
				



	int t;
 
	cin>>t;
	while(t--)
	{	
		long long int n,d,a;
		long long int thirdT,thirdL,summ;
		cin>>thirdT>>thirdL>>summ;
		
		n=(summ*2)/(thirdT+thirdL);
		d=(thirdL-thirdT)/(n-5);
		a=thirdT - (2*d);
		cout<<n<<endl;
	 
		
		for(int i=1;i<=n;i++)
		{
		cout<<a<<" ";
		a=a+d;
		}
		
					 
	}
}
				  
						
			