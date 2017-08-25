  #include <iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	int budget,n;
	cin>>budget>>n;
	while(1)
	{
	int *weight=new int[n+1];
	int *value=new int [n+1];
	
	for(int i=1;i<n+1;++i)
	{
	    cin>>weight[i]>>value[i];
	}
	int matrix[n+1][budget+1];
	
 
 	 for(int i = 0; i <=n; i++)
	{
    for(int j = 0; j <=budget; j++)
    {  
        matrix[i][j] = 0;
    }
	}
 
	for(int i=1;i<=n;++i)
	{
	    for(int j=1;j<=budget;++j)
	    {
	        if(j<weight[i])
	            matrix[i][j]=matrix[i-1][j];
	        else
	            matrix[i][j]=max(matrix[i-1][j],value[i]+matrix[i-1][j-weight[i]]);
	    }
	    
	    
	}
	
 
	int sum=0;
/*	int	bud_temp=budget;
	int 	i=n;
	while(i>=1)
	{
		if(matrix[i][bud_temp]==matrix[i-1][bud_temp])
		{
			sum+=0;
			i=i-1;
		}
		else
		{
			sum+=weight[i];
			bud_temp-=weight[i];
			i=i-1;			
		}
		
	
		
		
		
		
	}
	*/
	for(int i=1;i<=budget;++i)
	{
		if(matrix[n][i]==matrix[n][budget])
		{
			sum=i;
			break;
		}
	}
	cout<<sum<<" "<<matrix[n][budget]<<endl;
	
	cin>>budget>>n;
	if(!budget && !n)
		{
			
			break;
		}
	}
	
	return 0;
}
