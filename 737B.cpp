#include <bits/stdc++.h>
using namespace std;



int solve(int input1 , string input2[])
{
  set<map<int,multiset<char>>> c;
  for(int i=0;i<input1;i++)
  {
    map<int,multiset<char>> a;
    for(int j=0;j<input2[i].length();j++)
    {
        int x=j%2;
        a[x].insert(input2[i][j]);
      
    }
    c.insert(a);
  }
  
  return c.size();
}


int main()
{
    string colour[4] = { "abcd", "cdab",
                             "bacd", "dacb" };
    cout<<solve(4,colour);
    return 0;
}

