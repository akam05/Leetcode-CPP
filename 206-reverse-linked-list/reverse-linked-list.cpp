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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* reversal = nullptr;
        while (temp != nullptr)
        {
            reversal = new ListNode {temp->val, reversal};
            temp = temp->next;
        }
        return reversal; 
        /*ListNode* result = nullptr;

        for (ListNode* temp = head; temp != nullptr; temp = temp->next)
        {
            result = new ListNode{temp->val, result};
        }
        return result;*/
    }
};