class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int bestend=arr[0];
        int ans=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            int v1=bestend+arr[i];
            int v2=arr[i];
            bestend=max(v1,v2);
            ans=max(ans,bestend);
        }
        return ans;
    }
};