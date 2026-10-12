class Solution {
  public:
    vector<int> bellmanFord(int n, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>res(n,1e8);
        res[src]=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<edges.size();j++)
            {
                int s=edges[j][0];
                int d=edges[j][1];
                int wt=edges[j][2];
                if(res[s]!=1e8 && res[d]>res[s]+wt)
                {
                    res[d]=res[s]+wt;
                }
            }
        }
        for(int j=0;j<edges.size();j++)
        {
            int s=edges[j][0];
            int d=edges[j][1];
            int wt=edges[j][2];
            if(res[s]!=1e8 && res[d]>res[s]+wt)
            {
                return {-1};
            }
        }
        return res;
    }
};
