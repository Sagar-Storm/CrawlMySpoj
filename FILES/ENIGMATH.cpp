  #include<bits/stdc++.h>
using namespace std;
 typedef long long int ll;
 
ll cd(ll x, ll y)
 {
     if(y==0)
        return x;
        
        return (cd(y,x%y));
     
 }
 
 void calculate(ll x, ll  y)
 {
     
     long long int LCM;
        LCM=((x*y)/cd(x,y));
        
 cout<<LCM/x<<" "<<LCM/y<<endl;
 }
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        calculate(x, y);
    }
    return 0;
}
