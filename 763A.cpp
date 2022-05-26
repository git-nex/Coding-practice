#include<bits/stdc++.h>
using namespace std;

#define V 4


bool isSafe(int v, bool graph[V][V], int color[] , int c)
{
  for(int i=0;i<V;i++)
  {
    if(graph[v][i] and color[i]==c)
    {
      return false;
    }


  }

  return true;
}


bool graphColoringUtil(bool graph[V][V], int m , int color[] , int v)
{
  if(v==V)
  {
    return true;
  }

  for(int c=1;c<=m;c++)
  {
    if(isSafe(v,graph,color,c))
    {
      color[v]=c;

      if(graphColoringUtil(graph,m,color,v+1))
      {
        return true;
      }

      color[v]=0;
    }
  }

  return false;
}

bool graphColoring(bool graph[V][V] , int m)
{
  int color[V];
  memset(color,0,sizeof(color));

  if(graphColoringUtil(graph,m,color,0)==false)
  {
    return false;
  }

  for(int i=0;i<V;i++)
  {
    cout<<color[i]<<" ";
  }
  cout<<endl;
  return true;


}



int main()
{
  

  bool graph[V][V];
  for(int i=0;i<V;i++)
  {
    for(int j=0;j<V;j++)
    {
      graph[i][j]=false;
    }
  }

  int n;

  cin>>n;

  for(int i=0;i<n;i++)
  {

    int x,y;
    cin>>x>>y;

    x--;
    y--;

    graph[x][y]=1;
    graph[y][x]=1;
  }

  int m;

  cin>>m;

  graphColoring(graph,m);

  return 0;

}
