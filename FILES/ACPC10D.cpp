   #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
ll	 count=0,n;
	while(scanf("%lld",&n) && n!=0)
	{
	    count+=1;
	    ll matrix[n][3];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<3;j++)
	        {
	             
	            scanf("%lld",&matrix[i][j]);
	        }
	    }
	  if(n==1)
	    {
	        printf("%lld. %lld\n",count,matrix[0][1]);
	        continue;
	    }
	    else
	    {
	  matrix[0][2]+=matrix[0][1];
	  matrix[1][0]+=matrix[0][1];
	  matrix[1][1]+=min(min(matrix[1][0],matrix[0][1]),matrix[0][2]);
	  matrix[1][2]+=min(min(matrix[0][1],matrix[1][1]),matrix[0][2]);
	  
	// printf("%lld.",count);
	    
	  for(int i=2;i<n;i++)
	   
         {
        matrix[i][0]+=min(matrix[i-1][0],matrix[i-1][1]);
        matrix[i][1]+=min(min(matrix[i-1][0],matrix[i][0]),min(matrix[i-1][2],matrix[i-1][1]));
        matrix[i][2]+=min(matrix[i][1],min(matrix[i-1][2],matrix[i-1][1]));
         }
	   ll minimum=matrix[n-1][1];
	   printf("%lld. %lld\n",count,minimum);
	    
	}
	}
	return 0;
	
	
}
