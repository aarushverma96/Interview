#include <bits/stdc++.h>

using namespace std;


int lrs(vector<char> X)
{
  int lenX=X.size();
  int LRS[lenX+1][lenX+1];
  for (int i = 0; i <= lenX; i++)
  {
    for (int j = 0; j <= lenX; j++)
    {
      if(i==0||j==0)
      {
        LRS[i][j]=0;
      }
      else if(X[i-1]==X[j-1] && i!=j)
      {
        LRS[i][j]=LRS[i-1][j-1]+1;
      }
      else
      {
        LRS[i][j]=max(LRS[i-1][j],LRS[i][j-1]);
      }
    }
  }

  return LRS[lenX][lenX];


}

int main()
{
  string X;
  cin >> X;
  std::vector<char> v;
  copy(X.begin(),X.end(),back_inserter(v));

  cout << lrs(v)<< endl;

  return 0;
}
