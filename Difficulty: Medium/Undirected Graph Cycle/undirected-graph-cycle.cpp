class Solution {
  public:
  bool cycle=false;
  void dfs(vector<vector<int>>&a,int n,int node,int parent,vector<bool>&vis){
      vis[node]=1;
      for(int j=0;j<a[node].size();j++)
      {
          int neigh=a[node][j];
          if(vis[neigh]==1 && neigh!=parent)
          {
              cycle=true;
          }
          if(vis[neigh]==0)
          {
              dfs(a,n,neigh,node,vis);
          }
      }
      return;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
     
        int n=V;
        vector<vector<int>>a(n);
        for(int i=0;i<edges.size();i++)
        {
            int src=edges[i][0];
            int dest=edges[i][1];
            a[src].push_back(dest);
            a[dest].push_back(src);
        }
        vector<bool>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(a,n,i,-1,vis);
            }
        }
        return cycle;
        
    }
};