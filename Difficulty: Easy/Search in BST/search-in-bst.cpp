/* Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  bool ans=false;
  void fun(Node* root, int key)
  {
      if(root==nullptr) return;
      if(root->data==key) ans=true;
      if(root->data>key) fun(root->left,key);
      else fun(root->right,key);
      return;
  }
    bool search(Node* root, int key) {
        // code here
        fun(root,key);
        return ans;
    }
};