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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(-1);
        ListNode* more = new ListNode(-1);
        ListNode* head_less = less;
        ListNode* head_more = more;
        
        while(head != NULL){
            if(head->val < x){
                less->next = head;
                less = less->next;
            }else{
                more->next= head;
                more= more->next;
            }
            head = head->next;
        }
        more->next = NULL;
        less->next = head_more->next;
        
        return head_less->next;
        
    }
};