#include <bits/stdc++.h>
#define n 2
using namespace std;

int main()
{
  return 0;
}

int minTime(int a[][n],int t[][n],int x1,int x2,int e1,int e2)
{
  int T1[n],T2[n];

  //base case
  T1[0]=e1+a[0][0];
  T2[0]=e2+a[1][0];

    for (int i = 1; i < n; i++)
    {
      T1[i]=min(T1[i-1]+a[0][i],T2[i-1]+t[1][i]+a[0][i]);
      T2[i]=min(T2[i-1]+a[1][i],T1[i-1]+t[0][i]+a[1][i]);
    }

    return min(T1[n-1]+x1,T2[n-1]+x2);

}
