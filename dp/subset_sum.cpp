#include <bits/stdc++.h>

using namespace std;



bool isSubset(vector<int> set,int sum)
{
  int n=set.size();
  bool sub[n+1][sum+1];

  for (int i = 1; i <= n; i++)
  {
    sub[i][0]=true;
  }

  for (int i = 1; i <= sum; i++)
  {
      sub[0][i]=false;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= sum; j++)
    {
      if(j<set[i-1])
      {
        sub[i][j]=sub[i-1][j];
      }
      if(j>=set[i-1])
      {
        sub[i][j]=sub[i-1][j] || sub[i-1][j-set[i-1]];
      }
    }
  }


  for (int i = 0; i <=n ; i++)
  {
    for (int j = 0; j <=sum ; j++)
    {
      if(sub[i][j]==true)
      {
        cout << "t" << " ";
      }
      else
      {
        cout << "f" << " ";
      }

    }
    cout << endl;
  }

  cout << endl;



  return sub[n][sum];

}



int main()
{
  int s[5]={2,3,7,8,10};
  std::vector<int> v;
  copy(&s[0],&s[4],std::back_inserter(v));
  int sum =11;
  cout << isSubset(v,sum);
  return 0;
}
