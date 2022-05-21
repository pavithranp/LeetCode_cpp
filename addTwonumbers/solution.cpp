/**https://leetcode.com/problems/add-two-numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode;
        ListNode *temp = l3;
        int carry=0;
        
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum=0;
        sum= sum+ carry;
        
        if (l1!=NULL){
            sum+=l1->val;
           l1=l1->next;  
        }   // move to next element 
            
           
        if (l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
            carry = sum/10; // take the carry
        ListNode *node = new ListNode;
        node->val = sum%10;
        // point to next element
        l3->next = node;
        l3= l3->next;   
        }
        return temp->next;
    }
};
