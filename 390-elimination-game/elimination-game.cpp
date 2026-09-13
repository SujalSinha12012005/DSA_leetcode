class Solution {
public:
    int lastRemaining(int n) {
        int head =1 ; 
        int step = 1 ; 
        bool left_to_right = true ; 
        while(n > 1){ //since need one num so remove ultill num becomes 1 
            if(left_to_right || n%2==1){ //for direction and odd freq 
                head = head + step ; 
            }
            n=n/2 ; //sice after one round of elimination freq will be  half 
            step = step * 2 ;  // skip of num will become double 
            left_to_right = !left_to_right ; //change direction

        }
        return head ; 
    }
};