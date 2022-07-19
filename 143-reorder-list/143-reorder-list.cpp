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
    void reorderList(ListNode* head) {
        vector<ListNode*>v;
        for(auto it = head; it; it = it->next){
            v.push_back(it);
        }
        int l = 1, r = v.size()-1;
        for(int i=0; i<v.size(); i++, head = head->next){
            if(i&1){
                head->next = v[l++];
            }
            else{
                head->next = v[r--];
            }
        }
        head->next = NULL;
    }
};