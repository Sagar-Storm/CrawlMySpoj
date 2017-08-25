 #include <bits/stdc++.h>
using namespace std;int reduce(long int a,string &b){int mod=0;for(int i=0;i<b.length();i++)    {        mod=(mod*10+(b[i]-48))%a;    } return mod;}
int gcd(int a, int b){    if(b==0)        return a;    else        return gcd(b,a%b);}
int main() {	 	long int t;	cin>>t;	while(t--)	{	    long long int a,temp;	    string b;	    cin>>a>>b;	   if(a==0 && b.length()==1 && b[0]=='0')	   {	    cout<<"0"<<endl;continue;	   }	    if(a==0)	    {	        cout<<b<<endl;continue;	    }	   if(b.length()==1 && b[0]=='0')	   {	       cout<<a<<endl;continue;}
temp=reduce(a,b);	    cout<<gcd(a,temp)<<endl;	}	return 0;}
