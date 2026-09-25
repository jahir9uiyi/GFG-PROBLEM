/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  Node* fun(vector<int>& arr,int low,int high)
  {
      if(low>high) return nullptr;
      int mid=(high+low)/2;
      Node* root=new Node(arr[mid]);
      root->left=fun(arr,low,mid-1);
      root->right=fun(arr,mid+1,high);
      return root;
  }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        return fun(arr,0,arr.size()-1);
    }
};