class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        vector<int>res;
        while(i<n && j<m)
        {
            if(a[i]>b[j]){
             res.push_back(b[j]);
             j++;
            }    
            else{
                res.push_back(a[i]);
                i++;
            }
        }
        while(i<n){
            res.push_back(a[i]);
            i++;
        }
        while(j<m){
            res.push_back(b[j]);
            j++;
        }
       for(int i=0;i<a.size();i++)
       {
           a[i]=res[i];
       }
      for(int j=0; j<b.size(); j++)
      {
          b[j]=res[a.size()+j];
      }
    }
};