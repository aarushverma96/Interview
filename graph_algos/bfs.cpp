#include <bits/stdc++.h>

using namespace std;

int main()
{
	return 0;
}


/*
1.) initialise a dist array
2.) initialise a queue
3.) set all distances to infinity
4.) add source node S to the queue
pop S
5.) add all the neighbour of S to queue
repete this till queue is not empty

*/

int V;  //number of nodes

void bfs(vector<int>graph[],int S)
{
	int dist[V];
	queue<int> q;
	for (int i = 0; i < V; ++i)
	{
		dist[i]=INT_MAX;
	}

	q.push(S);

	dist[S]=0;

	while(!q.empty())
	{
		int temp =q.front();
		//cout << temp;

		q.pop();
		for (vector<int>::iterator i=graph[temp].begin(); i != graph[temp].end(); ++i)
		{
			if(dist[*i]==INT_MAX)
			{
				dist[*i]=dist[temp]+1;
				q.push(*i);
			}

		}


	}

	



}