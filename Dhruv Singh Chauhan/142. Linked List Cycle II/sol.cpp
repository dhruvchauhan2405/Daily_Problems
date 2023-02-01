/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *j=head;
        ListNode *i=head;
        ListNode *entry=head;
        while(j &&j->next){
            i=i->next;
            j=j->next->next;
            if(i==j){
                break;

            }
        }
        if(j==NULL || j->next==NULL){
            return NULL;
        }

        while(i!=entry){
            i=i->next;
            entry=entry->next;
        }
        return entry;


    }
};