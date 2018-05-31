#include <bits/stdc++.h>

using namespace std;

int main()
{
  return 0;
}

int cut(vector<int> price)
{
  int n=price.size();
  int op[n];
  op[0]=price[0];

  for (int i = 0; i < price.size(); i++)
  {
    for (int j = 0; j <= i; j++)
    {
      int max_val=INT_MIN;
      max_val=max(max_val,(price[j]+op[i-j-1]));
      op[i]=max_val;
    }
  }

  return op[n-1];
}
