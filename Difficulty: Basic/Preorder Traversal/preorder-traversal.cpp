/* Structure of Tree Node
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
};*/

class Solution {
  public:
  vector<int>res;
    void fun(Node* root){
        if(root==NULL) return;
        res.push_back(root->data);
        fun(root->left);
        fun(root->right);
        return;
    }
    vector<int> preOrder(Node* root) {
        // code here
        res.clear();
     fun(root);
     return res;
    }
};