 #include<bits/stdc++.h>
using namespace std;

 int mini( int a,  int b, int c)
{
int larger=a<b?a:b;
int largest=larger<c?larger:c;
return largest;

}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int matrix[n][m+2];
	for(int i=0;i<n;i++)
	    for(int j=1;j<=m;j++)
	        cin>>matrix[i][j];
	
	
	for(int i=0;i<n;i++)
	{
	    matrix[i][0]=1000;
	    matrix[i][m+1]=1000;
	}
	 
        
	for(int i=n-2;i>=0;i--)
	    for(int j=1;j<=m;j++)
	    {
	       matrix[i][j]=matrix[i][j]+mini(matrix[i+1][j-1],matrix[i+1][j+1],matrix[i+1][j]);
	    }
	    
 
	    
	    int minimum=matrix[0][1];
	    for(int j=2;j<=m;j++)
	        if(minimum>matrix[0][j])
	            minimum=matrix[0][j];
	            
	           cout<<minimum<<endl;
	       
	            
	return 0;
}
