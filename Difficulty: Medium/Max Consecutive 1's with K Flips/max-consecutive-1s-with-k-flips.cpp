class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>cap;
        int low=0;
        int n=arr.size();
        int res=0;
        for(int high=0;high<n;high++)
        {
            cap[arr[high]]++;
            while(cap[0]>k)
            {
                cap[arr[low]]--;
                if(cap[arr[low]]==0) cap.erase(arr[low]);
                low++;
            }
            if(cap[0]<=k)
            {
                int len=high-low+1;
            res=max(res,len);
                
            }
        }
        return res;
    }
};
