    // A C++ program to find the count of distinct substring
// of a string using trie data structure
#include <bits/stdc++.h>
#define MAX_CHAR 26
using namespace std;

void  findlcs(string &s, string &reverse ,int length,int length2)

{
    int **matrix=new int*[length+1];
    
    for(int i=0;i<=length;i++)
    {
    	matrix[i]=new int[length2+1];
    }
    
    for(int i=0;i<=length;++i)
    {
        matrix[0][i]=0;
        matrix[i][0]=0;
    }
    
    for(int i=1;i<=length;++i)
        for(int j=1;j<=length2;j++)
            if(s[i-1]==reverse[j-1])
                matrix[i][j]=1+matrix[i-1][j-1];
            else
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    
    int index= matrix[length][length2];
	 string lcs="";
 
    int i=length,j=length2;
    
    while(i>0 && j>0)
    {
        if(s[i-1]==reverse[j-1])
        {
            lcs+=s[i-1];
            i--;j--;index--;
    
        }
        else if(matrix[i-1][j]>matrix[i][j-1])
        i--;
        else j--;
    }
 sort(lcs.begin(),lcs.end());
   cout<<lcs<<endl;
   
}
int main()
{
   string str1,str2;
   // cin.ignore();
    while(getline(cin,str1) && getline(cin,str2))
    {
           
           if(str1.length()==0 || str2.length()==0)
           {
           		cout<<endl;continue;
           }
           sort(str1.begin(),str1.end());
           sort(str2.begin(),str2.end());
       int i=0,j=0;    
   	for(;;) {
            if(i >= str1.size() || j >= str2.size()) break;
            if(str1[i] == str2[j]) {
                printf("%c", str1[i]);
                i++, j++;
            } else {
                if(str1[i] > str2[j]) j++;
                else i++;
            }
        }
        
        
	   
	   printf("\n");
    }
	return 0;
}
