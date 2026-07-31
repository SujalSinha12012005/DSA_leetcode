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
    ListNode* rev(ListNode* head){
        ListNode* prev = NULL , *curr = head ; 
        while(curr!=NULL){
            ListNode* nex = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = nex ; 
        }
        return prev ; 
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head , *fast = head ; 
        while(fast!=NULL && fast->next != NULL){
            slow = slow -> next ; 
            fast = fast -> next -> next ; 
        }
        ListNode* first_half = head ; 
        ListNode* second_half = rev(slow) ; 

        while(second_half != NULL){
            if(second_half -> val != first_half->val){
                return false ; 
            }
            first_half=first_half-> next ;  
            second_half =second_half -> next ;  
        }
        return true ; 
    }
};