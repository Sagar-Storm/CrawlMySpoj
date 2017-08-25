#include<iostream>

using namespace std;


int main(){

long long  t;
long long k;
cin>>t;
long long  result;
while(t--)
{
result=0;
cin>>k;
 result=192+((k-1)*250);
cout<<result<<endl;
}
return 0;
}