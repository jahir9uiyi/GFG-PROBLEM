/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* prev=nullptr;
        Node* curr=slow;
        while(curr!=nullptr)
        {
            Node* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        Node* head2=prev;
        Node* head1=head;
        while(head2!=nullptr)
        {
            if(head1->data!=head2->data) return 0;
            head1=head1->next;
            head2=head2->next;
        }
        return 1;
    }
};