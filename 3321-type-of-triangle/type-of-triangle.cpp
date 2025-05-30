class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[1] and nums[1]==nums[2]) return "equilateral";
        else if((nums[0]==nums[1] or nums[1]==nums[2] ) and (nums[0]+nums[1]>nums[2])) return "isosceles";
        else {
            if(nums[0]+nums[1]>nums[2]) return "scalene";
            else return "none";
        };
    }
};