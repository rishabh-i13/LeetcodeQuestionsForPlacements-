class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag=false;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]) continue;
            else if(nums[i]>nums[i+1] and flag==false){
                flag=true;
                if(nums[i]<nums[n-1] or nums[0]<nums[n-1]) return false;
            }
            else if(nums[i]>nums[i+1] and flag!=false) return false;
        }

        return true;
    }
};