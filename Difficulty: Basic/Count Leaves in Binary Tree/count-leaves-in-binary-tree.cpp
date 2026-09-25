/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
  int count=0;
  void fun(Node* root){
      if(root==nullptr) return;
      if(root->left==nullptr && root->right==nullptr) count++;
      fun(root->left);
      fun(root->right);
      return;
  }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        count=0;
        fun(root);
        return count;
    }
};