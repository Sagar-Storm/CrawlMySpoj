    #include<algorithm>
#include<iostream>
#include<string>
int f(long long int, long long int []);
using namespace std;
long long int n,c;

int main()
{

long long	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>c;
		int nn=n;
		long long int stalls[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>stalls[i];
		}
		
		
	 
		sort(stalls,stalls+n);
		
		long long int start=0,end=stalls[n-1], mid;
		while(end-start>1)
		{
		mid=(start+end)/2;
		if(f(mid,stalls)==1)
		start=mid;
		else
		end=mid;
		
		}
		
		cout<<start<<endl;
		 
	}
		
		 
		
	}
	
  int f(long long int x,long long int stalls[]){
	long long int cowplaced=1, prev=stalls[0];
	
	for(long long int i=1;i<n;i++)
	{
		if(stalls[i]-prev>=x)
			{
			
				if(++cowplaced==c)
					return 1;
						prev=stalls[i];
			}
			
		
	}
	
	return 0;
	
	
	
	
	
	
	}
	
	
			
			
			