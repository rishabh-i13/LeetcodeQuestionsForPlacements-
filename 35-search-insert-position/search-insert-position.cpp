class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;

        while(start<=end){
            int mid=start+(end-start)/2;;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }

        return start;
    }
};