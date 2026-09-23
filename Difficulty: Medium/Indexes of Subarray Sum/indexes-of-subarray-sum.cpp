class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int low=0;
        int sum=0;
        vector<int>res;
        for(int high=0;high<arr.size();high++)
        {
            sum+=arr[high];
            while(sum>target){
                sum-=arr[low];
                low++;
            }
            if(sum==target)
            {
                res.push_back(low + 1);
                res.push_back(high + 1);
                return res;
            }
        }
        return {-1};
    }
};