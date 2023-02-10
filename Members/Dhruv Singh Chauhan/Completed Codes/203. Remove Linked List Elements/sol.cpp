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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p = head;
        ListNode *prev = head;
        if(head==NULL)return head;
        while(p){
            if(p==head && p->val==val){
                p=p->next;
                head=p;
                prev=p;
            }
            else if(p->val == val){
                p=p->next;
                prev->next=p;
                // prev=p;
            }
            else{
                prev=p;
                p=p->next;
            
            }

        }

        return head;
    }
};