#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> A,int n)
{
  int sz=A.size();

  int count[n+1];
  memset(count,0,sizeof(count));

  count[0]=1;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < sz; j++)
    {
      if(i>=A[j])
      {
        count[i] += count[i-A[j]];
      }
    }
  }

  return count[n];


}


int main()
{

  std::vector<int> v;
  v.push_back(1);
  v.push_back(5);
  v.push_back(6);

  cout << sum(v,7);
  return 0;
}
