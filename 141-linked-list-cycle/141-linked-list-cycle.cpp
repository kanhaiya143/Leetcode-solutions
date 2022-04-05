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
    bool solve(ListNode *head){
        ListNode *first=head, *second=head;
        
        while(head!=NULL && second!=NULL && second->next!=NULL){
            
            first=first->next;
            second=second->next->next;
            
            if(first==second)
                return true;
        }
        return false;
    }
    bool hasCycle(ListNode *head) {
        
        return solve(head);
    }
};