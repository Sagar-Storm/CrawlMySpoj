#include <bits/stdc++.h>
using namespace std; 
int frnd[101];

int main()
{
    int n,temp,temp1;
    set<int> f,fof;
    int a[101][101];
    cin>>n;
    
    
    
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>frnd[i];
        f.insert(frnd[i]);
        cin>>m;
        
        for(int j=0;j<m;j++)
        {
            cin>>temp1;
            fof.insert(temp1);
            
        }
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(fof.count(frnd[i]))
            fof.erase(frnd[i]);
        
    }
    
    cout<<fof.size()<<endl;
    
    
}