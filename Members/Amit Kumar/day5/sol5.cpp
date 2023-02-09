class Solution {
public:
int change(string str){
    int r=0;
    int base=1;
    int n=str.size();
    for(int i=n-1;i>=0;i--){
        if(str[i]=='1')
        r=r+base;
        base=base*2;
    }
    return r;
}


int n;
    int getDecimalValue(ListNode* head) {
        string s;
       
        while(head!=NULL){
            int data=head->val;
            char x=(data==1) ? '1':'0';
            s=s+x;
            head=head->next;
          
        }
          int ans=change(s);
          return ans;
        
    }
};