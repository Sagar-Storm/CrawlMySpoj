 #include<bits/stdc++.h>
using namespace std;



int findlcs(string &s, string &reverse ,int length)

{
    int **matrix=new int*[length+1];
    
    for(int i=0;i<=length;i++)
    {
    	matrix[i]=new int[length+1];
    }
    
    for(int i=0;i<=length;++i)
    {
        matrix[0][i]=0;
        matrix[i][0]=0;
    }
    
    for(int i=1;i<=length;++i)
        for(int j=1;j<=length;j++)
            if(s[i-1]==reverse[j-1])
                matrix[i][j]=1+matrix[i-1][j-1];
            else
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    
    return matrix[length][length];
   
}

void findMinimumCharacters(string &s)
{
    int length=s.length();
    string temp=s;
    reverse(s.begin(),s.end());
  if(s==temp)
  {
  	cout<<0<<endl;
  	return;
  }
    int minimumofchar=length-findlcs(temp,s,length);
    cout<<minimumofchar<<endl;
    
    
    
    
    
}


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    findMinimumCharacters(s);
	}
	return 0;
}

