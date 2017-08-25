  #include<iostream>
  #include<math.h>

 //void returnlastarray(long long int, int);
//void printlastdigits(long long int, long long int);

using namespace std;

int main(){
int t;
cin>>t;
long long int a, b;
while(t--)

{
cin>>a>>b;
if(!a && !b){
    cout<<"1"<<endl;
    continue;
}
if(!b){
    cout<<"1"<<endl;
    continue;}
if(!a){
    cout<<"0"<<endl;
    continue;}

    if(b%4==0)
        b=4;
    else
        b=b%4;
        int result=pow(a,b);
    cout<< result%10<<endl;


}
}








 