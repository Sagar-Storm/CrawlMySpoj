    #include<bits/stdc++.h>
  #include<cstdio>
  #include<string>
 
using namespace std;

int main()
{
    int t,n;
    char str[100];

    
    
    scanf("%d",&t);
   
    while(t--)
    {
        
        scanf("%d\n",&n);
            map<string,int> m;
        map<string, int> :: iterator i;
      
        while(n--)
        {
           gets(str);
            m[(string)str]++;
        }
        for(i=m.begin();i!=m.end();i++)
            printf("%s%d\n",(*i).first.c_str(),(*i).second);
        
         if (t>=1) printf("\n");
    }
    return 0;
    
}