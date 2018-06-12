#include <bits/stdc++.h>

using namespace std;

int knapsack(vector<int> val, vector<int> wt, int W)
{
  int n=wt.size();
  int knap[n+1][W+1];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if(i==0 || j==0)
      {
        knap[i][j]=0;
      }
      else if(wt[i-1] <= j)
      {
        knap[i][j]=max(knap[i-1][j],max(knap[i-1][j-wt[i-1]],val[i-1]));
      }
      else
      {
        knap[i][j]=knap[i-1][j];
      }
    }
  }

  return knap[n][W];

}

int main()
{
  return 0;
}
