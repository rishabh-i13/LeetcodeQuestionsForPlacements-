class Solution {
public:
    int t[101];
    int working(vector<int>&nums,int index,int n){
        if(index>=n) return 0;

        if(t[index]!=-1) return t[index];

        int steal=nums[index]+working(nums,index+2,n);

        int skip=working(nums,index+1,n);
        return t[index]=max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(t,-1,sizeof(t));
        return working(nums,0,n);
    }
};