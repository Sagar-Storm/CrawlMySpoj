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
  double a, b,c,d;
 cin>>a>>b>>c>>d;
  double s= (a+b+c+d)/2.0;
  double area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
printf("%.2lf\n",area);
}	
	return 0;
}
