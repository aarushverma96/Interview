#include <bits/stdc++.h>

using namespace std;


int binomial_cof(int n,int k)
{
  int c[n+1][k+1];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= min(i,k); j++)
    {
      if(j==0||j==i)
      {
        c[i][j]= 1;
      }
      else
      {
        c[i][j]=c[i-1][j-1]+c[i-1][j];
      }
    }
  }

  return c[n][k];
}

int main()
{
  cout << binomial_cof(3,2);
  return 0;
}
