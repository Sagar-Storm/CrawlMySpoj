 #include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 ll gcd(ll x, ll y)
 {
     if(y==0)
        return x;
        
        return gcd(y,x%y);
 }
 
 void countDivisors(ll x, ll y)
 {
     ll count=0;
    ll n=gcd(x,y);
     
     for(ll i=1;i<=sqrt(n);i++)
     {
         if(n%i==0)
         {
             if(n/i==i)
             count++;
             else
             count+=2;
         }
     }
     printf("%lld\n",count);
 }
 
int main()
{
     ll t;
    scanf("%lld",&t);
     while(t--)
     {
         ll x, y;
          scanf("%lld%lld",&x,&y);
         if(x==0 || y==0 )
         {
            printf("0\n");continue;}
            
      
       
         countDivisors(x,y);
     }
}
