#include <bits/stdc++.h>

using namespace std;


int permuatation(int n,int k)
{
  int p[n+1][k+1];
  for (int i = 0; i <= n ; i++)
  {

    for (int j = 0; j <= min(k,i) ; j++)
    {
      if(j==0)
      {
        p[i][j]=1;
      }
      else
      {
        p[i][j]=p[i-1][j]+(j*p[i-1][j-1]);
      }

      p[i][j+1]=0;
    }
  }

  return p[n][k];
}


int main()
{

  cout << permuatation(10,2) << endl;
  return 0;
}
