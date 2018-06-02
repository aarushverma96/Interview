#include <bits/stdc++.h>

using namespace std;

int main()
{
  return 0;
}

int maxSum(vector<int> A)
{
  int n=A.size();
  int ans[n];

  memset(ans,-1,sizeof(ans));

  ans[0]=A[0];

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(A[i]<A[j] && ans[i]<ans[j]+A[i]);
      {
        ans[i]=ans[j]+A[i];
      }
    }
  }

  int max=INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if(max<ans[i])
    {
      max=ans[i];
    }
  }

  return max;

}
