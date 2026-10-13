class Solution {
  public:
    int spanningTree(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>>a(n);
        int sum=0;
        for(int i=0;i<edges.size();i++)
        {
            int s=edges[i][0];
            int d=edges[i][1];
            int wt=edges[i][2];
            a[s].push_back({d,wt});
            a[d].push_back({s,wt});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>vis(n,0);
        pq.push({0,0});
        while(!pq.empty())
        {
            pair<int,int>p=pq.top();
            pq.pop();
            int wt=p.first;
            int node=p.second;
            if(vis[node]==1){
                continue;
            }
            vis[node]=1;
            sum=sum+wt;
            for(int j=0;j<a[node].size();j++)
            {
                int neigh=a[node][j].first;
                int w=a[node][j].second;
                if(vis[neigh]==0)
                {
                    pq.push({w,neigh});
                }
            }
        }
        
        return sum;
    }
};