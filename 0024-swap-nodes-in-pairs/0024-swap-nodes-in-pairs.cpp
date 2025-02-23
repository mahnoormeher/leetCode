/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      ListNode dummy(0,head);
      ListNode *prev=&dummy,*curr=head;
      while(curr&&curr->next){
        ListNode*npn=curr->next->next;
        ListNode*second=curr->next;
        second->next=curr;
        curr->next=npn;
        prev->next=second;
        prev=curr;
        curr=npn;
      }
return dummy.next;
    }
};