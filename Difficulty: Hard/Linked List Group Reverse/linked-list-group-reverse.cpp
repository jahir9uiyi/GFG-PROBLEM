class Solution {
public:
    Node* reverseKGroup(Node* head, int k)
    {
        
        Node* temp = head;
                  Node* res = head;
                  Node* prevfst = NULL;
                  int count = k;
                  bool isfst = true;
                  while (temp != NULL) {
                      count = k;
                      Node* fst = temp;
                      Node* prev, * cur, * aft;
                      if (isfst) {
                          prevfst = NULL;
                      }
                      prev = NULL;
                      cur = fst;
                      while (count > 0 && cur != NULL) {
                          aft = cur->next;
                          cur->next = prev;
                          prev = cur;
                          cur = aft;
                          count--;
                      }

                      if(prevfst != NULL)
                          prevfst->next = prev;
                      prevfst = fst;


                      if (isfst) {
                          res = prev;
                          isfst = false;
                      }
                      temp = cur;
                  }
                  return res;


    }
};
