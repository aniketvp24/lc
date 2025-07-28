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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *trav = head;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry > 0)
        {
            int x = l1 != nullptr ? l1->val : 0;
            int y = l2 != nullptr ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            sum = sum % 10;
            trav->next = new ListNode(sum);
            trav = trav->next;
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }
        ListNode *result = head->next;
        delete head;
        return result;
    }
};