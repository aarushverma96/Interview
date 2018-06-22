int Solution::solve(const vector<int> &A) {

  if(A.size()==0)
  {
    return 0;
  }

  if(A.size()==1)
  {
    return 1;
  }

  sort(A.begin(),A.end());

  int LLAP[A.size()][A.size()];

  for (int i = 0; i < A.size(); i++)
  {
    LLAP[i][A.size()-1]=2;
  }

  int llap=2;

  for (int j = A.size()-2; j >= 1; j--)
  {
    int i=j-1;
    int k=j+1;

    while(i>=0 && k<=A.size()-1)
    {
      if(A[i]+A[j]>2*A[k])
      {

        LLAP[i][j]=2;
        i--;
      }
      else if (A[i]+A[j] < 2*A[k])
      {
        k++;
      }
      else
      {
        LLAP[i][j]=LLAP[j][k]+1;
        i--;
        k++;

        llap=max(llap,LLAP[i][j]);
      }
    }

    while(i>=0)
    {
      LLAP[i][j] = 2;
      i--;
    }
  }

  return llap;

}
