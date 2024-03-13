class Solution {
public:
    int pivotInteger(int n) {
        int num=0;;
        int sum=(n*(n+1))/2;
        int prefix=0;
        for(int i=1;i<=n;i++){
            prefix+=i;
            if(sum-prefix+i==prefix){
                return i;
            }
        }
        return -1;
    }
};