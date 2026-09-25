class Solution {
  public:
  bool cycle=false;
  void dfs(vector<vector<int>>&a,int node,vector<bool>&path,vector<bool>&vis ){
      vis[node]=1;
      path[node]=1;
      for(int j=0;j<a[node].size();j++)
      {
          int neigh=a[node][j];
          if(vis[neigh]==1 && path[neigh]==1)
          {
              cycle=true;
          }
          if(vis[neigh]==0) dfs(a,neigh,path,vis);
      }
      path[node]=0;
      return;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        int n=V;
               vector<vector<int>>a(n);
               for(int i=0;i<edges.size();i++)
               {
                   int src=edges[i][0];
                   int dest=edges[i][1];
                   a[src].push_back(dest);
               }
               vector<bool>vis(n,0);
               vector<bool>path(n,0);
               for(int i=0;i<n;i++)
               {
                   if(vis[i]==0)
                   {
                       dfs(a,i,path,vis);
                   }
               }
               return cycle;
    }
};