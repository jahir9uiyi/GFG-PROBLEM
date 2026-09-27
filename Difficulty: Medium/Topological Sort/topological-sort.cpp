class Solution {
  public:
    vector<int> topoSort(int n, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(n);
        vector<int>indeg(n,0);
        for(int i=0;i<edges.size();i++)
        {
            int src=edges[i][0];
            int dest=edges[i][1];
            adj[src].push_back(dest);
            indeg[dest]++;

        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>res;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            res.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                int neigh=adj[node][i];
                indeg[neigh]--;
                if(indeg[neigh]==0)
                {
                    q.push(neigh);
                }
            }
        }
        return res;
    }
};