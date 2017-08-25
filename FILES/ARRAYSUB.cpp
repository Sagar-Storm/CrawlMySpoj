 #include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
long long int a[100005];
int main()
{
    ll n;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    ll k;
    cin>>k;
        
        long long int left=0,right=0;
        ll sum=0;
        ll count=0;
        ll larger=0;
        while(left<=(n-k))
        {
            while(count<k)
            {
            larger=max(a[right],larger);
            right++;
            count++;
            }
             cout<<larger<<" ";
             if(a[left]==larger)
             {
                larger=0;
                count=0;
                right=++left;
             }
             else
             {
             left++;
             count-=1;
             }
        
        }
        
        return 0;
    
     
    
    
}