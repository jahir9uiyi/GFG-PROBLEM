class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
    vector<int> res;
    unordered_map<int,int>cap;
        int n=arr.size();
        int low=0;
        int high=k-1;
            for(int i=low;i<=high;i++){
                cap[arr[i]]++;
            }
        while(high<n){
            
            res.push_back(cap.size());
            cap[arr[low]]--;
            if(cap[arr[low]]==0) cap.erase(arr[low]);
            low++;
            high++;
            cap[arr[high]]++;
        }
        return res;
    }
};