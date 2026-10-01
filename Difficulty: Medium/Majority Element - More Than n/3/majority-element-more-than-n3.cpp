class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int n=arr.size();
        int x=(n/3);
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>res;
        for(auto p:mp)
        {
            if(p.second>x){
                res.push_back(p.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};