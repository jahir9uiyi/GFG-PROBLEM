class Solution {
  public:
    int shortestPath(int n, vector<vector<int>> &edges, int src, int dest) {
        // code here
        vector<vector<int>>adj(n);
        vector<int>res(n,-1);
        vector<int>vis(n,0);
        for(int i=0;i<edges.size();i++)
        {
            int src=edges[i][0];
            int dest=edges[i][1];
            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }
        queue<pair<int,int>>q;
        q.push({src,0});
        vis[src]=1;
        while(!q.empty())
        {
            pair<int,int>p=q.front();
            q.pop();
            int node=p.first;
            int dist=p.second;
            res[node]=dist;
            for(int i=0;i<adj[node].size();i++)
            {
                int neigh=adj[node][i];
                if(vis[neigh]==0)
                {
                    q.push({neigh,dist+1});
                    vis[neigh]=1;
                }
            }
        }
        
        return res[dest];
    }
};
