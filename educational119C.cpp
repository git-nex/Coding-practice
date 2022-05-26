#include <bits/stdc++.h>
using namespace std;


#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    
    cin.tie(NULL);

    int t,k;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,x,kk;
        vector<ll> a,b;
        string s;
        cin>>n;
        for(i=0;i<n;i++)
        {
          cin>>x;
          a.push_back(x);
          b.push_back(x);
        }
        sort(b.begin(),b.end());
        if(a==b)
        {
          cout<<0<<endl;
          continue;
        }
        ll ans=0,max_till_now=INT_MIN,min_till_now=INT_MAX;
        for(i=0;i<n;i++)
        {
          if(a[i]==b[i])
          {
            if(max_till_now<a[i])
            {
              if(i>0)
              {
                if(a[i-1]==b[i-1])
                {
                  continue;
                }
              }
              else if(i==0)
              {
                continue;
              }
              ans+=(max_till_now-min_till_now);
              min_till_now=INT_MAX;
              max_till_now=INT_MIN;
              continue;
            }
            

          }
          max_till_now=max(max_till_now,a[i]);
          min_till_now=min(min_till_now,a[i]);
          //cout<<ans<<endl;
        }
        if(max_till_now!=INT_MIN and min_till_now!=INT_MAX)
        {
          ans+=(max_till_now-min_till_now);
        }
        

        cout<<min(ans,n-1);
        cout<<endl;

    }
    return 0;
}

