class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        vector<pair<int,int>> dp(n,{1,-1});

        int last_chosen=0;
        int maxL=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){

                    if(dp[i].first<dp[j].first+1){
                        dp[i]={dp[j].first+1,j};
                    }

                    if(dp[i].first>maxL){
                        maxL=dp[i].first;
                        last_chosen=i;
                    }
                }
            }
        }

        vector<int> ans;
        while(last_chosen!=-1){
            ans.push_back(nums[last_chosen]);
            last_chosen=dp[last_chosen].second;
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};