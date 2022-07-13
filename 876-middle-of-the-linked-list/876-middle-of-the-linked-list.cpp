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
        
        int n=0;
        ListNode* curr=head;
        
        while(curr!=NULL){
            curr=curr->next;
            n++;
        }
        curr=head;
        int i=0;
        int temp=n/2;
        
        while(temp){
            curr=curr->next;
            temp--;
        }
        return curr;
    }
};