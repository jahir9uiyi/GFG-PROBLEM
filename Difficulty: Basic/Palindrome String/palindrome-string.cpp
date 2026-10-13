class Solution {
  public:
  bool check(string& s,int low,int high)
  {
      int len=high-low+1;
      if(len==0||len==1) return true;
      if(s[low]!=s[high]) return false;
      check(s,low+1,high-1);
  }
    bool isPalindrome(string& s) {
       
        return check(s,0,s.size()-1);
    }
};