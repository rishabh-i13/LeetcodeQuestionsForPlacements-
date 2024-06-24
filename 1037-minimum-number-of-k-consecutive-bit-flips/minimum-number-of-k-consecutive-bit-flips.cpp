class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0, times=0;

        for(int i=0;i<n;i++){
            if(i>=k){
                if(nums[i-k]>1){
                    nums[i-k]-=2;
                    times--;
                }
            }
            if((nums[i]==1 and times%2==1) || (nums[i]==0 and times%2==0)){
                    if(i+k>n) return -1;

                    ans++;
                    times++;
                    nums[i]+=2;
            }
        }

        if(nums[n-k]>1) nums[n-k]-=2;

        return ans;
    }
};