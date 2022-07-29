// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Brute Force
        if(head==NULL) return NULL;
        ListNode* curr=head;
        int cnt=0;
        while(curr ){
            cnt++;
            curr=curr->next;
        }
        cout<<cnt<<endl;
        curr=head;
        if(cnt-n==0) return head->next;
        while(cnt-n>1){
            curr=curr->next;
            cnt--;
        }
        ListNode* temp=curr->next;
        curr->next=temp->next;
        temp->next=NULL;
        
        return head;
        
    }
};