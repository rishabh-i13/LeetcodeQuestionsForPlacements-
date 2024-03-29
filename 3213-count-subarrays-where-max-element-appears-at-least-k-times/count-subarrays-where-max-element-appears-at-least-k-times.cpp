class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0,j=0;
        int count=0;
        int n=nums.size();
        long long int ans=0;
        long long int maxi=*max_element(nums.begin(),nums.end());
        while(j<n){
            if(nums[j]==maxi)count++;

            while(count>=k){
                if(nums[i]==maxi)count--;
                i++;
                ans+=nums.size()-j;
            }
           j++;
        }
        return ans;
    }
};