class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bottleEmpty=0;
        int filled=numBottles;
        int drinked=0;
        while(filled>0){
            drinked+=filled;
            bottleEmpty+=filled;
            filled=bottleEmpty/numExchange;
            bottleEmpty=bottleEmpty%numExchange;
        }

        return drinked;
    }
};