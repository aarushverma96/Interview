#include <bits/stdc++.h>

using namespace std;

int main()
{

}

int V;

std::vector<bool> visited;
vector<int> graph[20];

void dfsutil(vector<int> graph[],int v)
{
	visited[v]=true;
	for (int i=0;i<graph[v].size();i++)
	{
		if(visited[graph[v][i]]==false)
		{
			dfsutil(graph,graph[v][i]);
		}
	}
}


void dfs(vector<int> graph[])
{
	for (vector<bool>::iterator i=visited.begin(); i!=visited.end(); ++i)
	{
		visited[*i]=false;
	}

	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			dfsutil(graph,i);
		}
	}
}

