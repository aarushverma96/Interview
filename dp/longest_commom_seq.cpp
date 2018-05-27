#include <bits/stdc++.h>

using namespace std;

vector<char> lcs(vector<char> X,vector<char> Y)
{
  int lenX=X.size();
  int lenY=Y.size();

  int LCS[lenX+1][lenY+1];

  for (int i = 0; i <= lenX; i++)
  {
    for (int j = 0; j <= lenY; j++)
    {
      if(i==0||j==0)
      {
        LCS[i][j]=0;
      }
      else if(X[i-1]==Y[j-1])
      {
        LCS[i][j]=1+LCS[i-1][j-1];
      }
      else if(X[i-1]!=Y[j-1])
      {
        LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
      }
    }
  }
  int lenLCS = LCS[lenX][lenY];
  vector<char> res;
  int i=lenX,j=lenY;

  while(i>0,j>0)
    {
      if(X[i-1]==Y[j-1])
      {
        res.push_back(X[i-1]);
        i--;
        j--;

      }
      else
      {
        if(LCS[i-1][j]>LCS[i][j-1])
        {
          i--;
        }
        else
        {
          j--;
        }
      }
    }

    return res;
}


int main()
{

  string X;
  string Y;

  cin>> X;
  cin >> Y;

  std::vector<char> v,z,res;

  copy(X.begin(),X.end(),std::back_inserter(v));
  copy(Y.begin(),Y.end(),std::back_inserter(z));

  res= lcs(v,z);

  reverse(res.begin(),res.end());

  for (int i = 0; i < res.size(); i++) {
    cout << res[i];
  }



  return 0;
}
