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
       
        ListNode* res =new ListNode;
        ListNode * head =res;
        int x,carry=0;

        while(l1!= NULL||l2!=NULL)
        {
           if(l1!= NULL&&l2!=NULL){

                x=l1->val + l2->val;
                if(carry==0){
                    res->val=x%10;                       
                     if(x<=9)
                        carry=0;
                    else
                        carry=1;
                }
                else if(carry==1){
                    res->val=(x+1)%10;         
                    if(x+1<=9)
                        carry=0;
                    else
                        carry=1;
                }
                    l1=l1->next;
                    l2=l2->next;
                    if(l1== NULL &&l2==NULL)
                    {
                    res->next==NULL;
                    }
                    else{
                    res->next= new ListNode;
                    res=res->next;}
            }

            else if(l1!=NULL){
                x=l1->val;
                if(carry==0){
                    res->val=x%10;                       
                }
                else if(carry==1){
                    res->val=(x+1)%10;         
                    if(x+1<=9)
                        carry=0;
                    else
                        carry=1;
                }

                l1=l1->next;
                
                if(l1!= NULL)
                {
                  res->next= new ListNode;
                res=res->next;
                }
                else
                res->next==NULL;
            }
          
            else if(l2!=NULL){
                x=l2->val;
                if(carry==0){
                    res->val=x%10;                       
                }
                else if(carry==1){
                    res->val=(x+1)%10;         
                    if(x+1<=9)
                        carry=0;
                    else
                        carry=1;
                }

                l2=l2->next;
                
                if(l2!= NULL)
                {
                  res->next= new ListNode;
                res=res->next;
                }
                else
                res->next==NULL;
            }
          
       

        }
            if(carry==1){
                res->next= new ListNode;
                res=res->next;
                res->val=1;

            }
        return head;
    }
};