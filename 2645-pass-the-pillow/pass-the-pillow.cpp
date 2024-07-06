class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n) return time+1;
        // if(time==n) return n-1;

        int i=n-1;
        int j=time/i;
        int k=time%i;

        if(j%2==0){
            if(k==0) return 1;
            else return k+1;
        }
        else{
            if(k==0) return n;
            else return n-k;
        }

    }
};