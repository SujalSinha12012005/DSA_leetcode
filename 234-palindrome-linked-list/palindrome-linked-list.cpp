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
    ListNode* rev ( ListNode* head){
        ListNode* curr = head , *prev = nullptr ; 
        while(curr != nullptr){
            ListNode* nex = curr -> next ; 
            curr -> next = prev ; 
            prev = curr ; 
            curr = nex ; 
        }
        return prev  ; 
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head , *fast = head ; 
        while(fast != NULL &&  fast -> next != NULL){
            slow = slow -> next ; 
            fast = fast -> next -> next ; 
        }
        ListNode* first = head ; 
        ListNode* second = rev(slow) ; 

        while(second != NULL){
            if(first->val !=  second -> val){
                return false ; 
            }
            first = first -> next ; 
            second = second -> next ; 
        }
        return true ; 
    }
};