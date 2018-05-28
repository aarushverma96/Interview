#include <bits/stdc++.h>

using namespace std;


int largeSum(vector<int> A)
{
  int len=A.size();
  int currMax=A[0];
  int maxFar=A[0];

  for (int i = 1; i < len; i++)
  {
    currMax=max(A[i],currMax+A[i]);
    maxFar=max(maxFar,currMax);
  }
  return maxFar;
}

int main()
{

   int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   std::vector<int> v;
   copy(&a[0],&a[8],std::back_inserter(v));

   cout << largeSum(v)<< endl;

  return 0;
}
