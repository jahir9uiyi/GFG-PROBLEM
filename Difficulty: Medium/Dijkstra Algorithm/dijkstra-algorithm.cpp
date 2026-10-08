class Solution {
  public:
    vector<int> dijkstra(int n, vector<vector<int>> &arr, int src) {
        // Code here
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<arr.size();i++)
        {
            int s=arr[i][0];
            int d=arr[i][1];
            int w=arr[i][2];
            adj[s].push_back({d,w});
            adj[d].push_back({s,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        pair<int,int>p=pq.top();
        pq.pop();
        int d=p.first;
        int node=p.second;
        if(d>dist[node]){
            continue;
        }
        for(int i=0;i<adj[node].size();i++)
        {
            int neigh=adj[node][i].first;
            int wt=adj[node][i].second;
            if(d+wt<dist[neigh])
            {
                dist[neigh]=wt+d;
                pq.push({d+wt,neigh});
            }
        }
    }
        return dist;
    }
};