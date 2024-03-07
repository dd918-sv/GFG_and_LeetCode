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
    ListNode* middleNode(ListNode* head) {
        ListNode*curr=head;
        ListNode*ans=head;
        while(curr->next!=NULL && curr->next->next!=NULL)
        {
            ans=ans->next;
            curr=curr->next->next;
        }
        if(curr->next!=NULL)
        {
            curr=curr->next;
            ans=ans->next;
        }
        return ans;
    }
};