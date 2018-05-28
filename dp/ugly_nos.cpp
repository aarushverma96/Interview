#include <bits/stdc++.h>

using namespace std;


int uglyN(int n)
{
  int n2,n3,n5,nU;
  nU=1;
  int ugly[n];
  ugly[0]=1;

  int i2,i3,i5;
  i2=i3=i5=0;

  n2=ugly[i2]*2;
  n3=ugly[i3]*3;
  n5=ugly[i5]*5;

  for (int i = 1; i < n; i++)
  {
    nU=min(min(n2,n3),n5);
    ugly[i]=nU;

    if(nU==n2)
    {
      i2++;
      n2=ugly[i2]*2;
    }
    if(nU==n3)
    {
      i3++;
      n3=ugly[i3]*3;
    }
    if(nU==n5)
    {
      i5++;
      n5=ugly[i5]*5;
    }
  }

  return nU;
}

int main()
{
  int n;
  cin >> n;
  cout << uglyN(n) << endl;

  return 0;
}
