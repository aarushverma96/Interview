/*
	call dfs for every node
	keep track of vertex for which dfs finishes last.
	from the set of last finished vertices call dfs and check reachability of everynode form that
*/


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


int dfs(vector<int> graph[])//this function will return mother vertex
{
	for (vector<bool>::iterator i=visited.begin(); i!=visited.end(); ++i)
	{
		visited[*i]=false;
	}

	int last;

	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			dfsutil(graph,i);
			last=i;
		}
	}


	fill(visited.begin(), visited.end(), false);
	dfsutil(graph,last);

	for (int i = 0; i < visited.size(); ++i)
	{
		if(!visited)
		{
			return -1;
		}
	}

	return last;


}

