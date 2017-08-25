   #include<bits/stdc++.h>
  using namespace std;
 
 int positionsX[4]={-1,0,1,0};
 int positionsY[4]={0,-1,0,1};
 //int MAX=numeric_limits<int>::max();
 vector<string> st;
 int matrix[210][210],n,m;
 
 void fill()
 {
     queue<pair<int,int>> q;
     pair<int,int> temp,child;
     for(int i=0;i<::n;i++)
     {
         for(int j=0;j<::m;j++)
         if(st[i][j]=='1')
         {
             matrix[i][j]=0;
            temp=make_pair(i,j);
            q.push(temp);
            
        }
     }
     
     while(!q.empty())
     {
         temp=q.front();
         q.pop();
         
         int xs=temp.first;
         int ys=temp.second;
         
         for(int i=0;i<4;i++)
         {
             int xd=xs+positionsX[i];
             int yd=ys+positionsY[i];
             
             if(xd>=0 && xd<n && yd>=0 && yd<m && matrix[xd][yd]>matrix[xs][ys]+1)
             {
                 child=make_pair(xd,yd);
                 matrix[xd][yd]=matrix[xs][ys]+1;
                 q.push(child);
             }
             
         }
         
     }
     
     
     
 }
 
 
 void fillthearraywithmax()
 {
     for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            matrix[i][j]=INT_MAX;
     
     
     
 }
 
 
 
 
 int main()
 {
 	
     long long int t;
     cin>>t;
     while(t--)
    {
    	st.clear();
     
     cin>>::n>>::m;
     string line;
     for(int i=0;i<::n;i++)
     {
         cin>>line;
         st.push_back(line);
     }
     
     fillthearraywithmax();
     fill();
     
     for(int i=0;i<n;++i)
     {
        for(int j=0;j<m;++j)
        {
            cout<<matrix[i][j]<<" ";
            
        }
     
         cout<<endl;
     }
     
         
     
     
    }
 }
 
 
 
 