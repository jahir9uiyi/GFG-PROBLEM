class Solution {
  public:
  int x[4]={-1,1,0,0};
  int y[4]={0,0,-1,1};
  bool valid(int i,int j, int n,int m)
  {
      if(i<0 || i>=n || j<0 ||j>=m) return false;
      return  true;
  }
  
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int fresh=0;
        int timee=0;
        queue<pair<int,int>>q;
        int i,j;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==2)
                {   q.push({i,j});
                    mat[i][j]==-2;
                    
                }
                else{
                    if(mat[i][j]==1)
                    {
                        fresh++;
                    }
                }
            }
        }
        while(!q.empty() && fresh>0)
        {
            timee++;
            int s=q.size();
            while(s--)
            {
                pair<int,int>p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int k=0;k<4;k++)
                {
                    int row=r+x[k];
                    int col=c+y[k];
                    if(valid(row,col,n,m) && mat[row][col]==1){
                        q.push({row,col});
                        mat[row][col]=-2;
                        fresh--;
                    }
                }
            }
        }
        if(fresh>0)
        {
            return -1;
        }
        return timee;
    }
};