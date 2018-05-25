#include <bits/stdc++.h>

using namespace std;

int main()
{
	return 0;
}

int V;


pair<int,int> myMin(int cost[])
{
	int min=INT_MAX-1;
	int index=0;
	for (int i = 0; i < V; ++i)
	{
		if(cost[i]<min)
		{
			min=cost[i];
			index=i;
		}
	}

	pair<int,int> res=make_pair(index,min);
	return res;

}

void prim(vector<pair<int,int> > graph[],int src)
{
	int cost[100];
	int parent[100];
	//multiset<pair<int*,int> comp> q;//refernce to cost,vertex
	memset(cost,INT_MAX,V);
	memset(parent,-1,V);

	cost[src]=0;

	/*for (int i = 0; i < V; ++i)
	{
		pair p = {&cost[i],i}; 
		q.insert(p);
	}*/
	int t=V;
	while(t)
	{
		pair<int,int> p = myMin(cost);//vertex,cost;

		int currVer=p.first;

		for (vector<pair<int,int> >::iterator i=graph[currVer].begin(); i != graph[currVer].end() ; ++i)
		{
			int w = (graph[currVer][(*i).first]).second;
			if(cost[(graph[currVer][(*i).first]).first]>w)
			{
				cost[(graph[currVer][(*i).first]).first]=w;
				parent[(graph[currVer][(*i).first]).first]=currVer;
			}
		}
	}

	t--;
}





/*
Basic kruskal algo

1.) sort all the edges according to their weight
2.) pick up the edge with minimum edge 
3.) check if its forming a cycle or not
	 if its not forming a cycle add it to the tree otherwise not.
*/

/*
	add all the edges to min priority queue
	extract min form priority queue
	check cost value of all its neighbour
	if it is greater than the weight of egde then update its cost value and parent value
*/

