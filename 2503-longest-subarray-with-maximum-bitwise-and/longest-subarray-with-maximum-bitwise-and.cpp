class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());

        int len=0;
        int ct=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi) ct++;
            else{
                len=max(len,ct);
                ct=0;
            }
        }
        len=max(len,ct);
        return len;

    }
};