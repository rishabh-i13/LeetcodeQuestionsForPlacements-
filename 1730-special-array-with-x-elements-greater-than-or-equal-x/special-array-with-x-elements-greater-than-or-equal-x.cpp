class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());

        int count=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=(i+1)){
                if(i==n-1 or nums[i+1]<i+1) count=i+1;
            }

        }
        return count;
    }
};