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
        ListNode* slow= head;
        ListNode* fast= head->next;


        // finding middle point
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        // reversing the second half of the list

        ListNode* second = slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* temp;


        while(second){
            temp=second->next;
            second->next=prev;
            prev=second;
            second=temp;
        }

        // merging of the lists

        second = prev;
        ListNode* tmp1;
        ListNode* tmp2;
        ListNode* first = head;

        while(second){
            tmp1= first->next;
            tmp2= second->next;
            first->next=second;
            second->next=tmp1;
            first=tmp1;
            second=tmp2;
        }

        
    }
};