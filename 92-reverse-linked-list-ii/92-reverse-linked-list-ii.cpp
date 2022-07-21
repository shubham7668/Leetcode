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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       
        if(head==NULL || left==right)
            return head;
        
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        
        ListNode* prev=dummy;
        ListNode* leftPtr=dummy;
        
        for(int i=0;i<left-1;i++) leftPtr=leftPtr->next;
        
        prev=leftPtr->next;
        
        //Reverse Logic
        for(int i=0;i<right-left;i++){
            ListNode* temp=leftPtr->next;
            leftPtr->next=prev->next;
            prev->next=prev->next->next;
            leftPtr->next->next=temp;
         }
        
        return dummy->next;
    }
};