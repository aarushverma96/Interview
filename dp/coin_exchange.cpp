#include <bits/stdc++.h>

using namespace std;

int exchange(vector<int> c,int a)
{
  int ex[a+1];

  for (int i = 0; i < a+1; i++) {
    /* code */
    ex[i]=INT_MAX-1;
  }
  ex[0]=0;

  cout << endl;

  for (int i = 0; i < c.size(); i++)
  {
    for (int j = c[i]; j <= a; j++)
    {

        ex[j]=min(ex[j],ex[j-c[i]]+1);

    }
  }

  return ex[a];

}


int main()
{

  int coins[4]={7,2,3,6};
  vector<int> v;
  copy(&coins[0],&coins[3],std::back_inserter(v));
  int a=13;
  cout << exchange(v,a);


  return 0;
}
