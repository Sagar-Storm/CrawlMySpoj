   #include<bits/stdc++.h>
 
 
using namespace std;
typedef long long int LL;
 
int main() {
	 

	    LL N, M;
	    scanf("%lld %lld",&N,&M);
	    LL *array=new LL[N];
	    for(int i=0;i<N;i++)
	    
	        scanf("%lld",&array[i]);
	        
	    
	        LL left=0;
	        LL right=0;
	        
	        LL sum=0,answer=0;
	        
	       while(left<N)
	      { 
	          while(right<N && array[right]+sum<=M)
	          {
	              sum+=array[right];
	              right++;
	          }
	          answer=max(answer,sum);
	          sum-=array[left];
	          left++;
	           
	       }
	       printf("%lld",answer);
	        
	
        
        
    return 0;    
    }
	
	

