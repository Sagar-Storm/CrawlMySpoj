 // #include <iostream>

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char str1[3000],str2[3000];
ll dp[3000][3000];
void  calculateNumber( long long int m, long long  int n)
{  
     
    memset(dp,0,sizeof(dp[0][0]*(m+1)*(n+1)));
    
    for(ll i=0;i<=m;i++)
    {
        for(ll j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
                
            else if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
                
            else
                dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
        }
        
    }
    printf("%lld\n",dp[m][n]);
}


int main() 
{
	// your code goes here
	ll t;
 	scanf("%lld",&t);
 
	while(t--)
	{
	 scanf("%s",str1);
	 scanf("%s",str2);
 	long long int length1=strlen(str1);
 	long long int length2=strlen(str2);
	calculateNumber(length1,length2);
	}
	return 0;
}
	

