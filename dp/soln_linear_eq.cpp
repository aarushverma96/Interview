#include <bits/stdc++.h>

using namespace std;

int soln(vector<int> coeff,int rhs)
{
  int sol[rhs+1];
  memset(sol,0,sizeof(sol));
  sol[0]=1;

  for (int i = 0; i < coeff.size(); i++)
  {
    for (int j = coeff[i]; j <= rhs; j++)
    {
      sol[j] += sol[j-coeff[i]];
    }
  }

  return sol[rhs];
}


int main()
{
  std::vector<int> A;
  A.push_back(1);
  A.push_back(2);
  cout << soln(A,5);
  return 0;
}
