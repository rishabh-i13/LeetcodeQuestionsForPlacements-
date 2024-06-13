class Solution {
public:
    int n;
    int dp[1001][1001];
    int working(vector<vector<int>>& pairs,int index,int prev){
        if (index>=n) return 0;
        if(prev!=-1 and dp[index][prev]!=-1) return dp[index][prev];

        int take=0;
        if(prev==-1 or pairs[index][0]>pairs[prev][1]){
            take=1+working(pairs,index+1,index);
        }

        int skip=working(pairs,index+1,prev);

        if(prev!=-1) return dp[index][prev]=max(take,skip);
        return max(take,skip);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        n=pairs.size();
        memset(dp,-1,sizeof(dp));
        sort(pairs.begin(),pairs.end());
        return working(pairs,0,-1);
    }
};