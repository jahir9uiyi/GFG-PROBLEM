class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
    vector<vector<int>>res;
        int n=arr.size();
int st1=arr[0][0];
int en1=arr[0][1];
    for(int i=0;i<n;i++)
    {
        int st2=arr[i][0];    
        int en2=arr[i][1];
        if(en1>=st2)
        {
            st1=st1;
            en1=max(en1,en2);
            continue;
        }
        res.push_back({st1,en1});
        st1=st2;
        en1=en2;
    }
    res.push_back({st1,en1});
    return res;
    }
};