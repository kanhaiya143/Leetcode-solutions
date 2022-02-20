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
    void twinSum(ListNode* &head, ListNode* tail, int& maxi, int x, int y){
        
        if(head==NULL || tail==NULL)
            return;
        
        twinSum(head, tail->next, maxi, x, y);
        //cout<<tail->val<<endl;
        x = tail->val;
        y = head->val;
        
        maxi=max(maxi, x+y);
        head=head->next;
        //cout<<head->val<<endl;
        
        //maxi=max(maxi, head->val+twinSum(head->next));
        
    }
    int pairSum(ListNode* head) {
        int maxi=INT_MIN;
        int x=0, y=0;
        twinSum(head, head, maxi, x, y);
        return maxi;
        
    }
};