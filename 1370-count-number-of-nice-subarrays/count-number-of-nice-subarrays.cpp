class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) v[i]=0;
            else v[i]=1;
        }
        unordered_map<int,int> mp;
        mp[0]=1;
        int ansCt=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            ansCt+=mp[sum-k];
            mp[sum]++;
        }
        return ansCt;
    }
};