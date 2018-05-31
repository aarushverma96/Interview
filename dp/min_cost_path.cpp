#include <bits/stdc++.h>

using namespace std;

int main()
{
  return 0;
}

int minCost(vector<int> v[],int m,int n)
{
  int mc[m][n];
  mc[0][0]=v[0][0];

  for (int i = 0; i < m; i++)
  {
    mc[i][0]=mc[i-1][0]+v[i][0];
  }
  for (int i = 0; i < n; i++)
  {
    mc[0][i]=mc[0][i-1]+v[0][i];
  }

  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      mc[i][j]=min(mc[i-1][j],min(mc[i][j-1],mc[i-1][j-1]))+v[i][j];
    }
  }

  return mc[m][n];
}
