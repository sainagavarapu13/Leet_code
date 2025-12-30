class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full = numBottles,price = numExchange,to = 0,empty=0;
        while(full>0){
            to +=full;
            empty += full;
            full = 0;
            while(empty>=price){
                full++;
                empty -= price;
                price++;
            }
        }
        return to;
    }
};