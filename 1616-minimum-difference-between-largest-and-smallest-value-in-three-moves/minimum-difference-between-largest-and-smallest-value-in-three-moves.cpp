class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4) return 0;

        sort(nums.begin(),nums.end());
        int minDiff=INT_MAX;

        for(int l=0;l<4;l++){
            int r=n-4+l;
            minDiff=min(minDiff,nums[r]-nums[l]);
            
        }

        return minDiff;

    }
};