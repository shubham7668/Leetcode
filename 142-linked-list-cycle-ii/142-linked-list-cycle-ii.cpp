/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
        ListNode* curr=head;
        map<ListNode*,int> mpp; // Node,Occurence
       
        while(curr){
            if(mpp[curr]==1){
                return curr;
            }
            mpp[curr]++;
            curr=curr->next;
        }
        return NULL;
    }
};