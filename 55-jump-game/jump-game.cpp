class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minjump=0;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            minjump++;
            if(minjump<=nums[i]) minjump=0;
        }
        if(minjump==0) return true;
        return false;
    }
};