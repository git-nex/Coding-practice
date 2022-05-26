#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin>>n;
  int x;
  bool flag=true;
  vector<int> a;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    a.push_back(x);
  }
  
  int dp[n][2];
  dp[0][0]=a[0];
  dp[0][1]=a[0]-1; 
  for(int i=0;i<n-1;i++)
  {
    if(a[i+1]-dp[i][0]<0)
    {
      if(a[i+1]-dp[i][1]<0)
      {
        //cout<<i<<endl;
        flag=false;
        break;
      }

      dp[i][1]=a[i]-1;
      dp[i][0]=a[i]-1; 
      
    }
    else
    {
      dp[i][1]=a[i]-1;
      dp[i][0]=a[i]; 
       
    }

    
  }
  if(flag)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  cout<<endl;
}