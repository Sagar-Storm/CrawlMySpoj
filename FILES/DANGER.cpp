  #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
        while(1)
        {
            char a[10];
            scanf("%s",a);
            if(a[0]=='0' && a[1]=='0' && a[3]=='0')
                break;
                
            ll x=10*(a[0]-'0')+(a[1]-'0');
            x=x*pow(10,a[3]-'0');
            
            ll n=log2(x);
            ll m=pow(2,n);
            
            ll answer=(2*(x-m))+1;
            printf("%lld\n",answer);
            
            
        }
	
}
