class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int ans=-1;
        int maxx=-1;
        for(auto x:mp)
        {
            if(x.second>arr.size()/2)
            {
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};