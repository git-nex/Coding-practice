#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,B,x;

  cin>>n;
  vector<int> A;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    A.push_back(x);
  }
  cin>>B;
  unordered_map<int,int> mp;
    int xr =0,count=0;
    for(int i=0;i<A.size();i++)
    {
        xr^=A[i];
        if(A[i]==B)
        {
            count++;
            if(i==0)
            {
                
                continue;
            }
        }
        if(xr==B)
        {
            count++;
        }
        count+=mp[xr];
        if(xr==B)
        {
            mp[A[i]]++;
        }
        cout<<xr<<" ";
        
    }

    cout<< count;
}