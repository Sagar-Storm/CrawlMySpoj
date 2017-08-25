 #include<bits/stdc++.h>

using namespace std;

int N;
int p[2009];
int cache[2001][2001];
 
 int profit(int begin, int end)
 {
     if(begin>end)
        return 0;
        
    if(cache[begin][end]!=-1)
        return cache[begin][end];
        
    int year=N-(end-begin+1)+1;
        
    return cache[begin][end]=max(profit(begin+1,end)+(year*p[begin]),profit(begin,end-1)+(year*p[end]));
    
     
 }



int main() {
	// your code goes here
	 
	scanf("%d",&N);
 
    for(int i=0;i<N;++i)
     	scanf("%d",&p[i]);
        
     memset(cache,-1,sizeof(cache));
 
	 
  
    printf("%d",profit(0,N-1));
        
	return 0;
}
