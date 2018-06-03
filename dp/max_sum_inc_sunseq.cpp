#include <bits/stdc++.h>

using namespace std;


int maxSum(vector<int> A)
{
  int n=A.size();
  cout << n;
  int ans[n];

//  memset(ans,-1,sizeof(ans));
  for (int i = 0; i < n; i++) {
    ans[i]=A[i];
  }
  cout << endl;

  ans[0]=A[0];

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(A[i]>A[j] && ans[i]<ans[j]+A[i]);
      {
        ans[i]=ans[j]+A[i];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " " ;
  }
   cout << endl;


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


int main()
{
  int a[7]={1,101,2,3,100,4,5};
  std::vector<int> v;
  copy(&a[0],&a[7],back_inserter(v));
  cout << maxSum(v) << endl;
  return 0;
}
