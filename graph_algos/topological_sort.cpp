#include <bits/stdc++.h>

using namespace std;

int main()
{
	return 0;
	//pop the stack that will give topological sort
}

vector<bool> visited;
stack<int> s;
int V;

void topological_sort(vector<int> graph[],int v)
{
	visited[v]=true;

	for (int i = 0; i < graph[v].size(); ++i)
	{
		if(visited[graph[v][i]]==false)
		{
			topological_sort(graph,graph[v][i]);
		}
	}

	s.push(v);
}

void util(vector<int> graph[],int v)
{
	for (int i = 0; i < V; ++i)
	{
		if(visited[i]==false)
		{
			topological_sort(graph,i);
		}
	}
}










/*set visited;
stack s;


void util(vector<int> graph)
{
	//for every vertex v in graph
	//if v is in visited do nothing
	//else call topological_sort(graph,v)



}

void topological_sort(vector<int>graph[],int v)
{

	//1.) if v is not in visted add v to visited
	//2.) for every child i of v in graph call topological_sort(graph,i)
	//3.) add v to stack s 



}*/