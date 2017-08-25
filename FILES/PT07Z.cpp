   #include<iostream>
#include<list>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
 int distance[10010];
class Graph
{
	int V;
	list<int> *adj;
	void DFSUtil(int v, bool visited[], int n);
public:
	Graph(int V);
	void addEdge(int v, int w);
	void DFS(int v);
};


Graph:: Graph(int V){

	this->V=V;
	adj=new list<int>[V];

}

void Graph::addEdge(int v, int w)
{

	adj[v-1].push_back(w-1);
	adj[w-1].push_back(v-1);
}


void Graph::DFSUtil(int v, bool visited[], int n)
{

	visited[v]=true;
 	::distance[v]=n;
	list<int> :: iterator i;
	for(i=adj[v].begin(); i!=adj[v].end();i++)
		if(!visited[*i])
			DFSUtil(*i, visited,n+1);


}


void Graph::DFS(int v)
{

	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	DFSUtil(v,visited,0);
}


int main()
{
	int n,m;
	cin>>n;
	int edges=n-1;
	Graph g(n);
	 int u,v;
	while(edges--){
	cin>>u>>v;
   	g.addEdge(u,v);
 	}
 	g.DFS(0);


	int node=0;
	
 	for(int i=0;i<n;i++)
 	if(::distance[i]>::distance[node])
 		node=i;
 		

 		
 		
 		 memset(::distance,0,sizeof(::distance));
 		  		g.DFS(node);
 		  		
 		  		sort(::distance,::distance+n);
  
 	
 	cout<<::distance[n-1]<<endl;
     

 
    return 0;
}