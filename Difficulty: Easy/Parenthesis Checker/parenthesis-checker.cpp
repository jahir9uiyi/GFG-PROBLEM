class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                st.push(s[i]);
                continue;
            }
           else{
            if(st.empty()) return false;
            //1
            if(s[i]==']' && st.top()=='['){
                st.pop();
                // continue;
            }
            //2
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
                // continue;
            }
            //3
            else if(s[i]==')' && st.top()=='('){
                st.pop();
                // continue;
            }
            else return false;
           }
        }
        if(!st.empty()) return false;
        return true;
    }
};