class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        int count=0;

        for(int i=1;i<n-1;i++){
            int x=nums[i-1];
            int y=nums[i];
            int z=nums[i+1];

            if((x+z)*2==y) count++;
        }

        return count; 
    }
};