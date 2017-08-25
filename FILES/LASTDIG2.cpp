  #include<iostream> 
 #include<math.h> 
 #include<string.h>
using namespace std;
int main(){int t;cin>>t;char a[1001];long long int b;while(t--){cin>>a>>b;if(!(a[0]-48) && !b){cout<<"1"<<endl; continue;}if(!b){cout<<"1"<<endl;continue;}if(!(a[0]-48)){cout<<"0"<<endl;continue;}int leng=strlen(a);long long int result=pow(a[leng-1]-48,b=b%4?b%4:4);cout<< result%10<<endl;}}
 





 