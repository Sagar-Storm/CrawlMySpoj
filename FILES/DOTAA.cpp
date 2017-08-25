  #include<bits/stdc++.h>
 
 using namespace std;
 
 
 
 int main()
 {
     //initialization
     int t;
     cin>>t;
     
     while(t--)
     {
         //initialization
         int n,m,dam,health[501];
         int flag=0,  i=1,
         count=0;
         cin>>n>>m>>dam;
         
         for(int i=1;i<=n;i++)
         {
             cin>>health[i];
             while((health[i]-=dam)>0)
             {
                 count++;
                 
             }
               
             
             
         }
         
         if(count>=m)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
         
         
       
         
         
         
         
         
     }
     return 0;
     
     
     
 }