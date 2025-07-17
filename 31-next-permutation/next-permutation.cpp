class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                ind=i-1;
                break;
            }
        }
        if(ind==-1) reverse(nums.begin(),nums.end());
        else{
            for(int i=n-1;i>ind;i--){
            if(nums[ind]<nums[i]){
                swap(nums[ind],nums[i]);
                break;
            }
        }

        reverse(nums.begin()+ind+1,nums.end());

        }
        
    }
};