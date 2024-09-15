class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        if(n%2!=0){
            int k=n/2;
            int t=k*2+1;
            for(int i=0;i<k;i++){
                ans+=abs(t-(i*2+1));
            }
        }
        else{
            int k=n/2;
            int m=((k*2+1)+((k-1)*2+1))/2;
            for(int i=0;i<k-1;i++){
                ans+=abs(m-(i*2+1));
            }
            ans++;
        }
        return ans;
    }
};