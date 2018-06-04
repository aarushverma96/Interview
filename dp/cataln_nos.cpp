#include <bits/stdc++.h>

using namespace std;


int catalan(int n)
{
  int c[n+1];
  c[0]=c[1]=1;
  for (int i = 2; i <= n ; i++)
  {
    c[i]=0;
    for (int j = 0; j < i; j++)
    {
      c[i] += c[j]*c[i-j-1];
    }
  }

  // for (int i = 0; i <= n ; i++)
  // {
  //   cout<< c[i] << " ";
  // }
  // cout << endl;

  return c[n];

}

int main()
{
  cout<<catalan(4)<<endl;
  return 0;
}
