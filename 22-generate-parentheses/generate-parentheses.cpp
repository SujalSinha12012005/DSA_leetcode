class Solution {
public:
    void fun(int open , int close , int n , string temp , vector <string>&res ){
        if(open == n &&  close == n){
            res.push_back(temp); // base case 
            return ; 
        }
        if (open<n){ //add open till it reaches open == n base case 
            temp.push_back('('); 
            fun(open +1 , close  , n , temp , res ); // explore all the choise with open (
            temp.pop_back();
            
        } 
         if(close < open){
            temp.push_back (')'); 
            fun(open  , close +1 , n , temp , res );//explore all the choise with ) 
            temp.pop_back(); 
        }
        return ; 
        
    }
    vector<string> generateParenthesis(int n) {
        int open =0  , close =0 ;   
        vector<string>res ; 
        string temp = "" ; 
        fun(open , close , n , temp , res ); 
        return res; 

    }
};