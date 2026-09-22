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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new  ListNode(0) ; //dummy LL to permorm sum of 2 LL and then store into it  
        ListNode* curr = dummy ;  // curr to point to each node of dummy

        int carry =0  ; // like if sum exceed 10 say 18 then  1 carry 8 passed as val to the node 

        while(l1 != NULL or  l2 != NULL or  carry != 0 ){
            int sum = carry ;  // initial sum is 0 once we get carry after 1st interation the alue of carry will be passed as sum and that will  be value of next new node 

            if(l1 != NULL){
                sum += l1 -> val ; 
                l1 = l1 -> next ; 
            }

            if(l2 != NULL){
                sum += l2 -> val ; 
                l2 = l2-> next ; 
            }

            curr -> next = new ListNode(sum % 10);
            curr = curr -> next ; 

            carry = sum /10 ; // for carry  


        }
        return dummy -> next ;  // since current is alredy pointing to null now start from dummy -> next // also why we called dummy next casue dummy 1st node is 0 which is not needed so thats why 
       
    }
};