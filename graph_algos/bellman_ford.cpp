#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	return 0;
}

int V;
int dist[100];


void bellman(vector< pair<int,int> > graph[],int s)
{

	dist[s]=0;
	bool flag=false;

	memset(dist,INT_MAX,V);

	for (int i = 0; i < V-1; ++i)
	{
		for (int j = 0; j < V; ++j)
		{
			for (vector< pair<int,int> >::iterator k=graph[j].begin();k!=graph[j].end();++k)
			{
				int w=(graph[j][(*k).second]).first;
				if(dist[(*k).second]>dist[j]+w)
				{
					dist[(*k).second]=dist[j]+w;
				}
			}
		}
	}

	for (int j = 0; j < V; ++j)
		{
			for (vector< pair<int,int> >::iterator k=graph[j].begin();k!=graph[j].end();++k)
			{
				int w=(graph[j][(*k).second]).first;
				if(dist[(*k).second]>dist[j]+w)
				{
					flag =true;
				}
			}
		}

/*	if(flag)
	{
		negetive cycle exists
	}*/

}



/*
1 set all dist to infinity
2 for V-1 time relax all the edges

3 if after all iteretions we still r still able to relax the edge then negetive cycle is present.

*/


