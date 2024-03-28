class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int l=0;
        map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            while(mp[nums[j]]>k and i<=j){
                mp[nums[i]]--;
                i++;
            }
            l=max(l,j-i+1);
            j++;
        }
        return l;
    }
};