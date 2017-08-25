 #include<bits/stdc++.h>
using namespace std;
int indx=0;
int cnt=0;
#define MX 100005
 bool prime[100005];
 int dist[MX];
   bool visited[MX];

void sieveofe()
{
     
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    
    for(int p=2;p*p<=(100005);p++)
    {
       if(prime[p]==true)
       {
        for(int j=p*2;j<=100005;j+=p)
            prime[j]=false;
       }
    }
    
}
 

void convert_to_array(int digit[],int value)
{
    digit[3]=value%10;
    value/=10;
    digit[2]=value%10;
    value/=10;
    digit[1]=value%10;
    value/=10;
    digit[0]=value%10;
    
}

int convert_to_digit(int digit[],int value)
{
    int number;
    number=(digit[0]*1000 )+(digit[1]*100) + (digit[2]*10)+digit[3];
    return number;
}
 

int main() {
	// your code goes here
	int t;
	cin>>t;
	sieveofe();
	while(t--)
	{
	    
    int  n,m,digit[4];
    cin>>n>>m;
    
    if(n==m)
        {
            cout<<"0"<<endl;
            continue;
        }
   
   memset(visited,false,sizeof(visited));
   memset(dist,-1,sizeof(dist));
   
   
   
   
   
   
   queue<int> q;
  
   q.push(n);
   visited[n]=true;
   dist[n]=0;
   
   while(!q.empty())
   {
       int val=q.front();
  
       if(val==m)
        break;
        
      
        
        
        for(int i=0;i<4;i++)
        {
            convert_to_array(digit,val);
            for(int j=0;j<10;j++)
            {
                int temp;
                digit[i]=j;
                temp= convert_to_digit(digit,temp);
                if(prime[temp] && temp>=1000 && temp<=9999 && !visited[temp])
                {
                    visited[temp]=true;
                    dist[temp]=dist[val]+1;
                    q.push(temp);
                }
            }
            
        }
        q.pop();
        
        
   }
   
   
   if(dist[m]==-1)
   {
       cout<<"impossible."<<endl;
   }
   else
   cout<<dist[m]<<endl;
	}
   
 
 
}
