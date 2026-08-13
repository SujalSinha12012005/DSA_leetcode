class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start =0 ; //lets assume intilly gas station 0 as starting point 
        int total = 0 ; //fuel used in entire journey 
        int fuel = 0 ; // to check if fuel is sufficient or not at every point curr case check 

        for(int i =0 ; i<gas.size() ; i++){
            int diff = gas[i] - cost[i] ; //cost to move one station to other 
            total += diff ;//fuel after the entire journey done left out fuel 
            fuel += diff ;//fule whcih is left at one perticar station 

            if(fuel < 0){ //neg fuel can.t reach so make fuel 0 
            start = i+1 ; //move form that station since cant be stating point 
            fuel =0 ; 

            }
        }
        return total >= 0 ? start : -1 ; 
    }
};