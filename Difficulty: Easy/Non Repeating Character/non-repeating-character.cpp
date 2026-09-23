
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int>cap;
        for(int i=0;i<s.size();i++)
        {
            cap[s[i]]++;
        
        }
        char ans='$';
        for(int i=0;i<s.size();i++){
            if(cap[s[i]]==1) {
                ans=s[i];
                break;
            }
        
        }
        return ans;
    }
};