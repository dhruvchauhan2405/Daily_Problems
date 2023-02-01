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
    ListNode* middleNode(ListNode* head) {
        ListNode* i;
        ListNode* j;
        i=head;
        j=head;
        while(j!=NULL){
            if(j->next==NULL){
                return i;
            }
            i=i->next;
            j=j->next;
            if(j->next==NULL){
                return i;
            }
            j=j->next;
        }
        return i;
    }
};