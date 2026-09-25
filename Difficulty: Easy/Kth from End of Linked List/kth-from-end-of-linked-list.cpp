/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        if(head==nullptr) return -1;
        Node* prev=nullptr;
        Node* curr=head;
        int count=0;
        while(curr!=nullptr)
        {
            count++;
            Node* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        if(count<k) return -1;
        Node* pre=nullptr;
        Node* now=prev;
        while(k--)
        {
            pre=now;
            now=now->next;
        }
        int ans=pre->data;
        return ans;
    }
};