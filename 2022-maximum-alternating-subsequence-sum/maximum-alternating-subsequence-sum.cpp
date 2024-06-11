class Solution {
public:
    int n;
    long long dp[100001][2];
    long long working(vector<int> &nums,int index,bool flag){
        if(index>=n) return 0;

        if(dp[index][flag]!=-1) return dp[index][flag];

        long long skip=working(nums,index+1,flag);
        long long val=nums[index];
        if(!flag) val=-val;

        long long take=working(nums,index+1,!flag)+val;

        return dp[index][flag]=max(skip,take);

    }

    long long maxAlternatingSum(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return working(nums,0,true);// true:+ve, false:-ve
    }
};