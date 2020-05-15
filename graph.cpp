#include<bits/stdc++.h>
using namespace std;

class graph{
	public:
	int v;
	vector<int> *adj;
	graph(int v)
	{ this->v=v;
	adj= new vector<int>[v];}
	void addedge(int a,int b);
	void bfs(int x);
	void dfs(int x);
	void dfsrec(int x,bool visited[]);
	int cyclic=0;
};
void graph::addedge(int a,int b)
	{
		adj[a].push_back(b);
		
	}
void graph::bfs(int x)
{
	bool visited[v];
	queue<int> q;
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	visited[x]=true;
	q.push(x);
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		cout << x << " ";
		for(auto it=adj[x].begin();it!=adj[x].end();it++)
		{   
			if(!visited[*it])
			{ 
				visited[*it]=true;
				q.push(*it);
			}
			else
			{   cout << "c" << *it;
				cyclic++;
			}
		}
	}
}
void graph::dfs(int x)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	visited[x]=true;
	
		dfsrec(x,visited);
}
void graph::dfsrec(int x,bool visited[])
{
	visited[x]=true;
	cout << x << " ";
	for(auto it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it])
		{dfsrec(*it,visited);}
		else
			{   cout << "c" << *it;
				cyclic++;
			}
	}
}
	
int main()
{
	graph g(7);
	g.addedge(1,2);
	g.addedge(1,3);
	g.addedge(1,4);
	g.addedge(2,5);
	g.addedge(2,3);
	g.addedge(3,5);
	g.addedge(5,6);
	g.addedge(3,6);
	for(int i=0;i<g.v;i++)
	{
		cout << i << " ";
		for(auto it=g.adj[i].begin();it!=g.adj[i].end();it++)
		{
			cout << *it << " ";
		}
		cout << endl;}
	g.dfs(1);
	if(g.cyclic>=1)
	cout << endl << "cyclic:" << g.cyclic;
	else
	cout << endl << "acyclic";
	return 0;
}

