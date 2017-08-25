#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	int t;cin>>t;
	int count=0;
	while(t--)
{
 ll k,n;
 cin>>n>>k;
 ll h[n];
 for(int i=0;i<n;i++)
 {
     cin>>h[i];
 }
 if(k==1){
 cout<<"0"<<endl;
 continue;
 }
 
 int minimum=INT_MAX;
 sort(h,h+n);
// cout<<h[2]<<endl;
if(k==n)
{
    cout<<h[n-1]-h[0]<<endl;
    continue;
}
for(int i=k-1;i<n;i++)
{
   int  diff=h[i]-h[i-k+1];
  if(minimum>diff)
 minimum=diff;
 

 
}
 cout<<minimum<<endl;
}	
	return 0;
}
