class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i,sum=0;
        map<int,int> mp;
        mp[0]=-1;
        for(i=0;i<n;i++){
            sum+=nums[i];
            int t=sum%k;
            if(mp.find(t)!=mp.end() ){
                if((i-mp[t])>=2) return true;
            }
            else mp[t]=i;
        }

        return false;
    }
};