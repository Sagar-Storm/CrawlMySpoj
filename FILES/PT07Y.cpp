 #include<iostream>
#include<list>

using namespace std;
int numberOfNodesTraversed=0;
class Graph
{
	int V;
	list<int> *adj;
	void DFSUtil(int v, bool visited[]);
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

	adj[v].push_back(w);
}


void Graph::DFSUtil(int v, bool visited[])
{

	visited[v]=true;
	numberOfNodesTraversed+=1;

	list<int> :: iterator i;
	for(i=adj[v].begin(); i!=adj[v].end();i++)
		if(!visited[*i])
			DFSUtil(*i, visited);


}


void Graph::DFS(int v)
{

	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	DFSUtil(v,visited);
}


int main()
{
	int n,m;
	cin>>n>>m;
	int edges=m;
	Graph g(n+1);
	 int u,v;
	while(edges--){
	cin>>u>>v;
   	g.addEdge(u,v);
 	}
 	g.DFS(1);

    if(numberOfNodesTraversed==n && m==n-1){
    	cout<<"YES";
    }
    else
    	cout<<"NO";

 
    return 0;
}