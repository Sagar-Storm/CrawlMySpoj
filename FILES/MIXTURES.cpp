  // See the Cormen book for details of the following algorithm
#include<stdio.h>
#include<limits.h>
#include<bits/stdc++.h>

// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
 
 
 int csum[105][105];
 int m[105][105];
 int arr[105];
 
 void setcsum(int arr[],int size){
     
  
  
    for(int i=1;i<=size;i++)
    for(int j=1;j<=size;j++)
    {
            if(i==j)
            {
                    csum[i][j]=arr[j-1];
            }
            else
            {
                if(csum[i][j]==-1)
               csum[j][i]=csum[i][j]=(csum[i][j-1]+arr[j-1])%100;
               
            }
    }
            
            
          /*  printf("matrix csum \n");
            
            for(int i=1;i<=size;i++)
            {
            for(int j=1;j<=size;j++)
                printf("%d ",csum[i][j]);
                printf("\n");
                    }*/
 }
 
 int MatrixChainOrder(int p[], int n)
{
 
    /* For simplicity of the program, one extra row and one
       extra column are allocated in m[][].  0th row and 0th
       column of m[][] are not used */
     
 
    int i, j, k, L, q;
 
    /* m[i,j] = Minimum number of scalar multiplications needed
       to compute the matrix A[i]A[i+1]...A[j] = A[i..j] where
       dimension of A[i] is p[i-1] x p[i] */
 
    // cost is zero when multiplying one matrix.
    for (i=1; i<=n; i++)
        m[i][i] = 0;
 
    // L is chain length.
    for (L=2; L<=n; L++)
    {
        for (i=1; i<=n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;
            for (k=i; k<=j-1; k++)
            {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k+1][j] + csum[i][k]*csum[k+1][j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    
   /* for(int i=1;i<=n;i++)
            {
            for(int j=1;j<=n;j++)
                printf("%d ",m[i][j]);
                printf("\n");
                    }
 */
 
    return m[1][n];
}


int main()
{
	int size;
	
	 while(scanf("%d",&size)==1)
	 {
	 	for(int i=0;i<size;i++)
	  
	 			scanf("%d",&arr[i]);
	 	
	 
	 
	
	
 
	     
	    memset(csum,-1,sizeof(csum));
	    
	

    setcsum(arr,size);
   	printf( "%d\n",
					MatrixChainOrder(arr, size));
 
 
	 
	}
	getchar();
	return 0;
}



    
    
    
