#include<bits/stdc++.h>

using namespace std;

int minPath(vector<vector<int> > &A)
{
  int size=A.size();

  int sum=A[0][0];
  int j=0;
  for (int i = 0; i < size-1; i++)
  {
    if(A[i+1][j]<A[i+1][j+1])
    {
      sum+=A[i+1][j];
    }
    else
    {
      sum+=A[i+1][j+1];
      j++;
    }
  }

  return sum;

}

int main()
{
  vector<vector<int> > A{ { 3 },
                            { 6, 4 },
                            { 5, 2, 7 },
                            { 9,1,8,6 } };

  cout << minPath(A);

  return 0;
}
