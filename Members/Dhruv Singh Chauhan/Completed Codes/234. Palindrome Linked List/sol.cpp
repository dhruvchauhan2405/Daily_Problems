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
    bool isPalindrome(ListNode* head) {
        

        ListNode* slow= head;
        ListNode* fast= head->next;
        while(fast &&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next=NULL;
        ListNode* temp;
        ListNode* prev =NULL;

        while(second){
            temp=second->next;
            second->next=prev;
            prev=second;
            second=temp;
        }

        second = prev;
        ListNode* first=head;

        while(second){
            if(first->val==second->val){
                second=second->next;
                first=first->next;
            }
            else
            return false;
        }
        
        return true;
    }
};