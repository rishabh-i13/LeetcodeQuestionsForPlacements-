class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ans=0;
        int setBits=__builtin_popcount(num2);

        for(int i=31;i>=0 and setBits>0;i--){
            if(num1 & (1<<i)){
                ans=ans|(1<<i);
                setBits--;
            }
        }
        for(int i=0;i<32 and setBits>0;i++){
            if(!(ans & (1<<i))){
                ans=ans|(1<<i);
                setBits--;
            }
        }
        return ans;
    }
};