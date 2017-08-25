#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
long long  n;

long long unsigned sum,temp;
while(t--){
sum=0;
cin>>n;



for(long long  i=0;i<n;i++){
cin>>temp;
sum=(sum+temp)%n;
}


if (!sum)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;




}

}


