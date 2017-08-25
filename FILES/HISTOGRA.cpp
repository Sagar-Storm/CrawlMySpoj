 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll height[100001];
stack<ll> s;
int main() {
	// your code goes here
	ll n;
    while(scanf("%lld",&n))
        
    {
        if(n==0)
            break;
            
        for(ll i=0;i<n;i++)
        scanf("%lld",&height[i]);
        
   
        ll maxarea=0,area=0;
        ll i=0;
        while(i<n)
        {
            if(s.empty() || height[s.top()]<=height[i])
            {
                s.push(i++);
            }
            else
            {
                ll temp=s.top();
                s.pop();
                area=height[temp]*(s.empty()?i:i-s.top()-1);
                
                maxarea=max(area,maxarea);
            }
        }
        
        while(s.empty()==false)
        {
            ll temp=s.top();
            s.pop();
            area=height[temp]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
            
        }
        printf("%lld\n",maxarea);
        
    }
      
    
    
	
	return 0;
}
