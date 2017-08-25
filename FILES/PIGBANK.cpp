 #include<bits/stdc++.h>
 
using namespace std;
 
int value[501],weight[501],dp[10005];

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int E,F;
        scanf("%d %d",&E,&F);
        int N;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
            scanf("%d %d",&value[i],&weight[i]);
        }
        
        F=F-E;
        
          
        dp[0]=0;
        
        for(int i=1;i<=F;i++)
            {
                dp[i]=-1;
                for(int j=0;j<N;j++)
                {
                    if((weight[j]<=i && dp[i-weight[j]]!=-1) && (dp[i]==-1 || value[j]+dp[i-weight[j]]<=dp[i]))
                        dp[i]=value[j]+dp[i-weight[j]];
                }
            }
            
            if(dp[F]==-1)
            printf("This is impossible.\n");
            else
            printf("The minimum amount of money in the piggy-bank is %d.\n",dp[F]);
        
        
        
        
        
    }
	
	return 0;
}
