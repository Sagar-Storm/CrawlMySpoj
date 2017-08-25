   #include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
void sortandmultiply(int [], int [],int );
using namespace std;

int main(){

int t;
int n;
int *m, *w;
cin>>t;
while(t--){
cin>>n;
m=new int[n];
w=new int[n];

for(int j=0;j<n;j++){
    cin>>m[j];
}

for(int j=0;j<n;j++){
    cin>>w[j];
}

sortandmultiply(m,w,n);

}


}


void sortandmultiply(int m[],int w[], int n )
{

//cout<<"size of array is "<<n;
sort(m,m+n);
sort(w,w+n);
//cout<<"sorted array "<<endl;
//for(int i=0;i<n;i++)
  //  cout<<m[i]<<" " << w[i]<<endl;
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+(m[i]*w[i]);
}
cout<<sum<<endl;
}
