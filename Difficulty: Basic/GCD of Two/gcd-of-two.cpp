class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b!=0){
            int t=a%b;
            a=b;
            b=t;
        }
        return a;
        
    }
};
