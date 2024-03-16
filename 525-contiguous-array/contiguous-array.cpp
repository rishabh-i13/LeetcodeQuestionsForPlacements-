class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int sum=0;
        map<int,int> mp;
        mp[0]=-1;

        for(int i=0;i<n;i++){
            if(nums[i]==0) sum+=-1;
            else sum+=1;

            if(mp.find(sum)!=mp.end()){
                int idx=mp[sum];
                ans=max(ans,i-idx);
            }
            else mp[sum]=i;
        }
        return ans;
    }
};