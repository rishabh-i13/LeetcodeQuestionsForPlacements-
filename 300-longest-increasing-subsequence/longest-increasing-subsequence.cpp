class Solution {
public:
    int n;
    int dp[2501][2501];
    int working(vector<int> &nums,int index,int prev){
        if(index>=n) return 0;

        if(prev!=-1 and dp[index][prev]!=-1) return dp[index][prev];
        //taking ith element
        int take=0;
        if(prev==-1 or nums[prev]<nums[index]){
            take=1+working(nums,index+1,index);
        }

        //skip ith element
        int skip=working(nums,index+1,prev);

        if(prev!=-1) return dp[index][prev]=max(take,skip);
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        int prev=-1; //for 1st element
        return working(nums,0,prev);
    }
};