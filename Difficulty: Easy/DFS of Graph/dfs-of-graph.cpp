class Solution {
  public:
  void fun(vector<vector<int>>& adj,int node,vector<int>& res,vector<bool>& vin){
        res.push_back(node);
        vin[node]=true;
        for(int i=0;i<adj[node].size();i++)
        {
            int neigh=adj[node][i];
            if(vin[neigh]==false)
            {
                fun(adj,neigh,res,vin);
            }
        }
        return;
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
         int n=adj.size();
         vector<int>res;
         vector<bool>vin(n,0);
         fun(adj,0,res,vin);
         return res;
    }
};