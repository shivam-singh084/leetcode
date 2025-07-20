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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while (a != NULL || b != NULL) {
            int d1 = 0, d2 = 0;

            if (a != NULL){
                d1 = a->val;
            } 
            if (b != NULL){
                d2 = b->val;
            } 

            int sum = d1 + d2 + carry;
            int val = sum % 10;
            carry = sum / 10;

            temp->next = new ListNode(val);
            temp = temp->next;

            if (a != NULL){
                a = a->next;
            } 
            if (b != NULL){
                b = b->next;
            } 
        }

        if (carry != 0) {
            temp->next = new ListNode(carry);
        }

        return dummy->next;
    }
};