class Solution {
public:
    int reverse(int x) {       
        long long y=0;

        while(x!=0){
            int rem=x%10;
            y=y*10+rem;
            x=x/10;
        }
        if(y<INT_MIN or y>INT_MAX) return 0;
         return y;
        return y;
         
    }
};