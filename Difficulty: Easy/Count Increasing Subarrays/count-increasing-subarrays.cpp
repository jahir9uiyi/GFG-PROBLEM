class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here
        int st;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1]){
                ans+=i-st;
            }
            else{
                st=i;
            }
        }
        return ans;
    }
};
