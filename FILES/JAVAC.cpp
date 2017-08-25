  #include<bits/stdc++.h>
 #include<cstdio>
 
 using namespace std;
 
 
 
 int main()
 {
     //initialization
      char s[500]={},result[500]={};
      
      while(scanf("%s",s)!=EOF)
      {
        int status=0,cplus=0,java=0,index=0;
        
        for(int i=0;i<strlen(s);i++)
      {
         if( i==0 && ( (s[i]=='_' ) || (s[i]>=65 && s[i]<=90)))
         {
          status=1;
          break;
          
         
        }
        else if(s[i]==(strlen(s)-1) && (s[i]=='_')) //from c++ to java
        {
             status=1;
             break;
            
        } //from java to c++
        else if(s[i]>=65 && s[i]<=90)
        {
            if(cplus)
            {
                status=1;
                break;
            }
            java=1;
            result[index++]='_';
            result[index++]=s[i]+32;
        }
        
        else if(s[i]=='_')
        {
            i++;
            cplus=1;
            if(java)
            {
                status=1;
                break;
                
            }
           
            if(s[i]>=97 && s[i]<=122)
                {
                    result[index++]=s[i]-32;
                }
                else
                {
                    status=1;
                    break;
                }
        }
        else
        result[index++]=s[i];
            
            
        
        
         
     }
     result[index]='\0';
     if(status==0)
        printf("%s\n",result);
        else
        printf("Error!\n");
      }
     return 0;
     
     
     
 }