#include <bits/stdc++.h>

using namespace std;


int lis(vector<int> A)
{
  int LIS[A.size()];
  for (int i = 0; i < A.size(); i++) {
    LIS[i]=1;
  }

  for (int i = 1; i < A.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(A[i]>A[j] && LIS[i]<LIS[j]+1)
      {
        LIS[i]=LIS[j]+1;
      }
    }
  }

  // for (int i = 0; i < A.size(); i++)
  // {
  //   cout << LIS[i] << " ";
  //  }

  int max=0;

  for (int i = 0; i < A.size(); i++)
  {
    if(max<LIS[i])
    {
      max=LIS[i];
    }
  }


  return max;

}


int main()
{
  std::vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    v.push_back(temp);
   }

   cout << endl;

   // for (int i = 0; i < n; i++)
   // {
   //   cout << v[i] << " ";
   //  }

   cout << lis(v);

  return 0;
}
