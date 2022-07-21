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
    ListNode* reverseLL(ListNode* head){
        ListNode *p = NULL, *c = head, *n = head->next;
        while(c != NULL){
            c->next = p;
            p = c;
            c = n;
            if(n != NULL) n = n->next;
        }
        return p;
    }
    ListNode* addTwoLL(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        int carry = 0;
        ListNode* temp = dummy;
        while(l1 || l2 || carry){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return dummy->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = reverseLL(l1);
        ListNode* second = reverseLL(l2);
        ListNode* ans = addTwoLL(first, second);
        return reverseLL(ans);
    }
};