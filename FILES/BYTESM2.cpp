 #include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


long long int maxi(long long int a,long long  int b, long long int c)
{
long long	int larger=a>b?a:b;
long long	int largest=larger>c?larger:c;
return largest;

}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int row,col;
		cin>>row>>col;
		long long int **tiles=new long long int*[row];
 
		
		for(long long int i=0;i<row;i++)
			{
			tiles[i]=new long long int[col+2];
		 
			}
		
		for(long long int i=0;i<row;i++)
			 for( long long int j=1;j<=col;j++)
			 	
			 	cin>>tiles[i][j];
			 	
			 	
	 
			 	
			 //	int largest=maxi(tiles[5][2],tiles[5][1],tiles[5][3]);
			 //	cout<<largest<<endl;
			 
		for(long long int i=row-2;i>=0;i--)
			for(long long int j=1;j<=col;j++)
			{	tiles[i][j]=tiles[i][j]+maxi(tiles[i+1][j],tiles[i+1][j+1],tiles[i+1][j-1]);
				
			}
	 
				
						 	
	 
			 	
			long long 	int maximum=tiles[0][1];
				
				for(long long int j=2;j<=col;j++)
				
						if(tiles[0][j]>maximum)
							maximum=tiles[0][j];
							
				cout<<maximum<<endl;
				
	}
	
}
							
							
				
			 	
	
	