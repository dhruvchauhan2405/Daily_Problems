// leetcode problem 2 - Add two numbers
// linked list problem

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode(0);
        ListNode *temp = result;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            int sum = carry;
            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            temp->next = new ListNode(sum % 10);
            carry = sum / 10;
            temp = temp->next;
        }
        if (carry)
        {
            temp->next = new ListNode(carry);
        }
        return result->next;
    }
};