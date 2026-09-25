/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isBst(Node*root,int min, int max){
        //base case
        if(root == NULL) return true;

        if(root ->data >min && root ->data <max){
            bool left = isBst(root ->left, min,root ->data);
            bool right = isBst(root ->right, root->data, max);

            if(left && right) return true;
        }
        return false;
    }
    bool isBST(Node* root) {
        return isBst(root,INT_MIN,INT_MAX);

    }



};