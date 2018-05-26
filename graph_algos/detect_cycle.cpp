#include "bits.stdc++.h"

using namespace std;

int main()
{
  return 0;
}

int V;
bool visited[100];
bool recStack[100];

bool isCycle(vector<int> graph[])
{
  memset(visited,false,V);
  memset(recStack,false,V);
  bool res;
  for (int i = 0; i < V; i++)
  {
    if(visited[i]==false)
    {
      res=cycle(graph,i);
    }
  }
  return res;
}

int cycle(std::vector<int> graph[],int v)
{

  visited[v]=true;
  recStack[v]=true;
  for (int i=0; i<graph[v].size(); i++)
  {
    if ( !visited[i] && cycle(graph,graph[v][i]) )
    {
      return true;
    }
    else if (recStack[i])
    {
      return true;
    }
  }

  recStack[v] = false;  // remove the vertex from recursion stack
   return false;

}
