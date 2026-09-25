/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
   
        vector<int>tmp;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int lvlsize=q.size();
            while(lvlsize--)
            {
                Node* t=q.front();
                q.pop();
                tmp.push_back(t->data);
                if(t->left!=nullptr)
                {
                    q.push(t->left);
                }
                if(t->right!=nullptr)
                {
                    q.push(t->right);
                }
            }
        
        }
return tmp;
        
    }
};