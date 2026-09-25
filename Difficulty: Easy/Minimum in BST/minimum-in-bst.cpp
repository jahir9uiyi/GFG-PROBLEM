/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:

    int minValue(Node* root) {
        // code
        while(root->left!=nullptr)
        {
            root=root->left;
        }
        return root->data;
    }
};