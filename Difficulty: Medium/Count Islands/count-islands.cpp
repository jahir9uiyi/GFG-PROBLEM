class Solution{
  public:
int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
   int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
  
  bool valid(int n,int m, int i, int j)
  {
      if(i<0 ||i>=n || j<0 || j>=m) return false;
      return true;
  }
  void dfs(vector<vector<char>>& arr, int n, int m, int i, int j,vector<vector<bool>>& vis)
  {
      vis[i][j]=1;
      for(int k=0;k<8;k++)
      {
          int row=x[k] + i;
          int col=y[k] + j;
          if(valid(n,m,row,col) && arr[row][col]=='L' && vis[row][col]==0)
          {
              dfs(arr,n,m,row,col,vis);
          }
      }
      return;
  }
    int countIslands(vector<vector<char>>& arr) {
        // Code here
        int n=arr.size();
        int m=arr[0].size();
        int res=0;
        int i,j;
        vector<vector<bool>> vis(n);
        for(int i=0;i<n;i++)
        {
            vector<bool>t(m,0);
            vis[i]=t;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='L' && vis[i][j]==0)
                {
                    dfs(arr,n,m,i,j,vis);
              res++;
                }
            }
        }
        return res;
    }
};