class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && arr[i]==arr[n-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target)
                {
                    return true;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
        return 0;
    }
};