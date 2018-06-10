#include <bits/stdc++.h>

using namespace std;


int pairing(int n)
{
  int p[n+1];

  p[1]=1;
  p[2]=2;

  for (int i = 3; i <= n; i++)
  {
    p[i]=p[i-1]+(i-1)*p[i-2];
  }

  return p[n];
}

int main()
{

  cout << pairing(4);

  return 0;
}
