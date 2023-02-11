#include<iostream>
using namespace std;
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
    int getDecimalValue(ListNode* head) {
        int sum=0,t1=0,t2=0;
        while(head->next!=NULL){   
            sum=2*(sum+head->val); 
            head=head->next;   
        }
             
            if(head->val==1)
            {
                sum=sum+1;
            } 

            return sum;
        
    }
};
int main(){

return 0;
}