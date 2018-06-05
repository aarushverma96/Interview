#include <bits/stdc++.h>

using namespace std;

int tile(int n)
{
  int t[n];

  t[0]=1;
  t[1]=2;

  for (int i = 2; i < n; i++)
  {
    t[i]=t[i-1]+t[i-2];
  }
  return t[n-1];
}

int main()
{
  cout << tile(5);
  return 0;
}
