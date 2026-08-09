class Solution {
public:
    bool lemonadeChange(vector<int>& bills) { //cost of tea is 5rs 
       int five =0 , ten =0 ;//count the num of notes you have of 5rs &10rs 
        for(int i =0  ; i< bills.size() ; i++){
            if(bills[i] == 5){
                five ++ ; 
            }

            else if(bills[i] == 10){//cust give you 10rs  so give him 5rs change 
            if(five ==0){//u need to give five but you've no notes so false 
                return false ; 
            }
            ten ++ ; // ten notes give so increase 
            five -- ;  //five notes given as change son reduce 
           // ten ++ ; // ten notes give so increase 

            }

            else { // for 20 rs note so need to give 
        //case1 try to give mini num of notes that is 1-> 10 rs and 1-> 5rs note 
            if(ten > 0){
                ten -- ; 
                if(five == 0){
                    return false ;  // no five note left so false 
                }
                five -- ; 
            }
            else {//case 2  use 5 rs  3 notes to give now 
            if(five < 3){
                return false ; 
            }
            five = five - 3 ; //used 3 notes of 5 so reduce  the count by 3 

            }

            }

        }
        return true ; 
    }
};