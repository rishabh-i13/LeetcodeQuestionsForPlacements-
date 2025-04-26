class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count=0;
        int min_i=-1,max_i=-1,bad_i=-1;
        int i=0;
        int n=nums.size();

        while(i<n){
            if(nums[i]==minK) min_i=i;
            if(nums[i]==maxK) max_i=i;
            if(nums[i]<minK or nums[i]>maxK) bad_i=i;

            count=count+ max(0,min(max_i,min_i)-bad_i);
            i++;
        }
        return count;
    }
};