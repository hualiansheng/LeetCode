class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == NULL)
      return NULL;
    for (ListNode *p = head; p->next != NULL; ) {
      if (p->val == p->next->val)
        p->next = p->next->next;
      else
        p = p->next;
    }
    return head;
  }
};
