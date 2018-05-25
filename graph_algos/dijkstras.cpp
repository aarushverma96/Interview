#include <bits/stdc++.h>

using namespace std;


/*
values in graph are store in format <dist,vertex>
*/


int main()
{
	return 0;
}


int V;
bool visited[100];
int dist[100];
multiset< pair<int,int> > heap;
int parent[100];

void dijkstras(vector< pair<int,int> > graph[],int s)
{
	memset(visited,false,V);
	memset(parent,-1,V);
	memset(dist,INT_MAX,V);

	dist[s]=0;
	pair<int,int> p =make_pair(dist[s],s);
	heap.insert(p);

	while(!heap.empty())
	{

		pair<int,int> temp=*(heap.begin());
		heap.erase(heap.begin());

		int tempDist=temp.first;
		int tempVer=temp.second;

		if(visited[tempVer]==flase)
		{

			for(vector< pair<int,int> >::iterator i=graph[tempVer].begin();i!=graph[tempVer].end();++i)
			{
				int nDist=(graph[tempVer][(*i).second]).first;

				if(dist[(*i).second]>dist[tempVer]+nDist)
				{
					dist[(*i).second]=dist[tempVer]+nDist;
					pair<int,int> temp2=make_pair(dist[(*i).second],(*i).second);
					heap.insert(temp2);
				}
			}

		}

	}

}


/*
1. set dist of all vertice =inf source dist=0
2. push source vertex in a min-prority queue(dist,vertex)
3. extract vertex with min-dist from priority queue
4. update distances of all neighbouring vertextes then push verteicex
5. if poped vertex id visited do noting 
6. apply same algo till queue is empty
*/


/*
priority queue
visited array
graph
*/