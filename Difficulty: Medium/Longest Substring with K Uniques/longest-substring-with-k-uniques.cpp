class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.size();
        int low=0;
        int res=-1;
        unordered_map<char,int>cap;
        for(int high=0;high<n;high++)
        {
                cap[s[high]]++;
                while(cap.size()>k){
                    cap[s[low]]--;
                    if(cap[s[low]]==0) cap.erase(s[low]);
                    low++;
                    
                }
                if(cap.size()==k){
                    int len=high-low+1;
                    res=max(res,len);
                }
        }
        return res;
    }
};