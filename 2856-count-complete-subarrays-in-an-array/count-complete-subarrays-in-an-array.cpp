class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int count=0;
        int m=mp.size(); 
        int i=0,j=0;
        map<int,int> mpp;
        while(j<n){
            mpp[nums[j]]++;
            while(mpp.size()==m){
                count+=n-j;
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0) mpp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return count;
    }
};