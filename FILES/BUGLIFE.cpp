  #include<bits/stdc++.h>
using namespace std;
 
 
int BFS(vector<int> graph[],int n)
{
	bool visited[n+1]={0};
	int colour[n+1];
	int node, flag=0;
	
	memset(visited,0,sizeof(visited));
	memset(colour,-1,sizeof(colour));
	
	for(int k=1;k<=n;++k)
	{
		if(!visited[k])
			{
				queue<int> q;
				q.push(k);
				colour[k]=1;
				
				while(!q.empty())
				{
					 node=q.front();
						q.pop();
						visited[node]=1;
					
					for(int i=0;i<graph[node].size();i++)
						{
							if(colour[graph[node][i]]==-1)
								colour[graph[node][i]]=!colour[node];
								else if
								(colour[graph[node][i]]==colour[node])
								{
									flag=1;
									break;
								}
								if(!visited[graph[node][i]])
									q.push(graph[node][i]);
							
						}
						
						if(flag)
						break;
					
				}
				
				
				
			}
			if(flag)
				break;
		
	}
	return flag;
	
}
	
	
 

  

int main() {
	// your code goes here
	int t,n,m,count=0,u,v;
	cin>>t;
	while(t--)
	{
		count++;
	     
	 	cin>>n>>m;
	 	vector<int> graph[n+1];
	 	
	 	for(int i=0;i<m;i++)
	 	{
	 		cin>>u>>v;
	 		graph[u].push_back(v);
	 		graph[v].push_back(u);
	 		
	 	}
	 	cout<<"Scenario #"<<count<<":"<<"\n";
	 	
	 	if(BFS(graph,n))
	 		cout<<"Suspicious bugs found!\n";
	 		else
	 		cout<<"No suspicious bugs found!\n";
	}
	
	
	return 0;
	    
	 
	    
	   
	   
}
 
