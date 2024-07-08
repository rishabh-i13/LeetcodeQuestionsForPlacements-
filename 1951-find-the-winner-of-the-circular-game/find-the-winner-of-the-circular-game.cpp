class Solution {
public:
    int working(int n,int k){
        if(n==1) return 0;

        return (working(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        return working(n,k)+1;
    }
};