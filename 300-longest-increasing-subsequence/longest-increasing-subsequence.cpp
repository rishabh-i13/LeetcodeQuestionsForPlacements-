class Solution {
public:
//take - not take 
    int dp[2501][2501];
    int working(vector<int>& nums,int index,int prev_index,int n){
        if(index>=n) return 0;
        //take
        if(dp[index][prev_index+1]!=-1) return dp[index][prev_index+1];
        int take=0;
        if(prev_index==-1 or nums[index]>nums[prev_index]){
            take=1+working(nums,index+1,index,n);
        }
        //not take
        int not_take=working(nums,index+1,prev_index,n);

        return dp[index][prev_index+1]=max(take,not_take);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return working(nums,0,-1,nums.size());  
    }
};