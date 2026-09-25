/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  vector<int>res;
     void fun(Node* root){
         if(root==NULL) return;
         fun(root->left);
         fun(root->right);
         res.push_back(root->data);
         return;
     }
    vector<int> postOrder(Node* root) {
        // code here
        fun(root);
        return res;
    }
};