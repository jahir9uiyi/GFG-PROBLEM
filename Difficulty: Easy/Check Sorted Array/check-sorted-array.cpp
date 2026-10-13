class Solution {
  public:
  bool fun(vector<int>& arr,int idx,int n)
  {
      if(idx==n) return true;
      if(arr[idx]>arr[idx+1]) return false;
      fun(arr,idx+1,n);
  }
    bool isSorted(vector<int>& arr) {
        // code here
        return fun(arr,0,arr.size()-1);
    }
};