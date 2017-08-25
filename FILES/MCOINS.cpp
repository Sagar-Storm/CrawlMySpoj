 #include<bits/stdc++.h>
#include<algorithm>
#include<string>
#define N 1000005


using namespace std;
typedef long long int ll;

bool m[N];
 
/*bool isWinning(ll pos)
{
    if(pos==K || pos==L ||  pos==M)
        return false;
    int mov[3];
    mov[0]=pos-K;
    mov[1]=pos-L;
    mov[2]=pos-M;
    for(int i=0;i<3;i++)
    {
        if(!isWinning(mov[i]))
            return true;
        
    }
    return false;
}
 */

 
int main() {
	// your code goes here
  
    ll K,L,M;
    cin>>K>>L>>M;
   // cout<<K<<L<<M;
    
    memset(m,false,sizeof(m));
    for(int i=1;i<N;i++)
    {
        if(m[i-1]==0)
            m[i]=1;
        else if(i-K>=0 && m[i-K]==0)
            m[i]=1;
        else if(i-L>=0 && m[i-L]==0)
            m[i]=1;
    }
    
    for(int i=0;i<M;i++)
    {
        ll pos;
       scanf("%lld",&pos);
        if(m[pos])
        printf("A");
        else
        printf("B");
    }
        
    }
        
    
      
    
    
	
 

