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
    ListNode* reverse(ListNode* root){
        ListNode *prev=NULL, *cur=root, *next;
        
        while(cur){
            next=cur->next;
            cur->next=prev;
            
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        l1=reverse(l1);
        l2=reverse(l2);
        
        int sum=0, carry=0;
        int first,second;
        ListNode *root=NULL, *cur;
        
        while(l1!=NULL || l2!=NULL){
            first=0;
            second=0;
            
            if(l1!=NULL){
                first=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                second=l2->val;
                l2=l2->next;
            }
            
            sum=first+second+carry;
            carry=sum/10;
            ListNode* temp = new ListNode(sum%10);
            
            if(root==NULL){
                root=temp;
                cur=temp;
            }
            else{
                cur->next=temp;
                cur=temp;
            }
        }
        if(carry){
            ListNode* temp = new ListNode(carry);
            cur->next=temp;
            cur=temp;
        }
        
        root=reverse(root);
        
        return root;
    }
};