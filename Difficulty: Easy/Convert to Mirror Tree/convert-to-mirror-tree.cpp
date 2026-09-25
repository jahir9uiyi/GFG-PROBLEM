/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  void fun(Node* root)
  {
      if(root==nullptr) return;
      swap(root->left,root->right);
      fun(root->left);
      fun(root->right);
      return;
      
  }
    void mirror(Node* root) {
        // code here
        fun(root);
    }
};