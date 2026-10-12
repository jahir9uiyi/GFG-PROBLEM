class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int x=n;
        int sum=0;
        while(x>0)
        {
            int y=x%10;
            sum=y*y*y+sum;
            x=x/10;
        }
        if(sum==n) return true;
        return 0;
    }
};