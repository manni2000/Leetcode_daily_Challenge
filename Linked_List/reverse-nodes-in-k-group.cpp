class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || k <= 1)
            return head;
        ListNode *res = new ListNode(0);
        res->next = head;
        ListNode *pre = res, *cur = head, *nex;
        int num = 0;
        while (cur)
        {
            num++;
            cur = cur->next;
        }
        while (num >= k)
        {
            cur = pre->next;
            nex = cur->next;
            for (int i = 1; i < k; i++)
            {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            num -= k;
        }
        return res->next;
    }
};