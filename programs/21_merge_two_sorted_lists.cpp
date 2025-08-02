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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode(0);
        ListNode *trav = head;

        while (list1 || list2)
        {
            int smallest;
            if (list1 && list2)
            {
                if (list1->val < list2->val)
                {
                    smallest = list1->val;
                    list1 = list1->next;
                }
                else
                {
                    smallest = list2->val;
                    list2 = list2->next;
                }
            }
            else if (list1)
            {
                smallest = list1->val;
                list1 = list1->next;
            }
            else
            {
                smallest = list2->val;
                list2 = list2->next;
            }

            trav->next = new ListNode(smallest);
            trav = trav->next;
        }
        ListNode *result = head->next;
        delete head;

        return result;
    }
};