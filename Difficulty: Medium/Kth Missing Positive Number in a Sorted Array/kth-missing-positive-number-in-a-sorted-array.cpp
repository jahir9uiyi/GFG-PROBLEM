class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int res;
        int low=0;
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            res=arr[mid]-(mid+1);
            if(res<k) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low+k;
    }
};