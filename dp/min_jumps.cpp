#include <bits/stdc++.h>

using namespace std;


int minJumps(vector<int> A)
{
  int n=A.size();
  int jumps[n];
  for (int i = 1; i <= n; i++)
  {
    jumps[i]=INT_MAX;
  }

  jumps[0]=0;

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(i <= A[j]+j)
      {
        jumps[i]=min(jumps[i],jumps[j]+1);
      }
    }
  }

  return jumps[n-1];
}

int main()
{
  int a[10]={2,3,1,1,2,4,2,0,1,1};
  std::vector<int> A;
  copy(&a[0],&a[9],back_inserter(A));
  cout << minJumps(A);

  return 0;
}
