class Solution {
public:
    int jump(vector<int>& nums) {
        int minjumps=0;
        int end=0;
        int farthest=0;
        int n=nums.size();

        for(int i=0;i<n-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(farthest>=n-1){
                minjumps++;
                return minjumps;
            }

            if(i==end){
                minjumps++;
                end=farthest;
            }
        }
        return minjumps;
    }
};