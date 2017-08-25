 #include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
ll traingles(ll,ll);
 int main(){int t;cin>>t;while(t--){ll n;cin>>n;if(n==1){cout<<"1"<<endl;continue;}	ll result=(n*(n+2)*(2*n+1)/8);cout<<result<<endl;}}ll traingles(ll n, ll n1){ll sum=0;while(n>0 || n1>0){if(n1>0)	sum+=(n*(n+1)/2)+(n1*(n1+1)/2);	else sum+=(n*(n+1)/2);n--;	n1-=2;}	return sum;}
	