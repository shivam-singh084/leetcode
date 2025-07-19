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
         if (head == NULL || head -> next == NULL) {
          return head;
        }
     struct ListNode* ans = (struct ListNode*) malloc(sizeof(struct ListNode));
     ans->next = head;
     
     struct ListNode* curr = ans;
     while (curr -> next != NULL && curr -> next -> next != NULL) {
        struct ListNode* t1 = curr -> next;
        struct ListNode* t2 = curr -> next -> next; 

        curr->next = t2;
        t1->next = t2->next;
        t2->next = t1;
        curr = curr->next->next;
    }
    return ans -> next;
    }
};