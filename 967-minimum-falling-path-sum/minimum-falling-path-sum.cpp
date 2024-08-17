class Solution {
public:
    int dp[101][101];
    void working(int n, vector<vector<int>>& matrix,int &ans){

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int mini=INT_MAX;
                if((j-1)>=0) mini=min(mini,dp[i-1][j-1]);
                if((j+1)<n) mini=min(mini,dp[i-1][j+1]);
                mini=min(mini,dp[i-1][j]);

                dp[i][j]=mini+matrix[i][j];
            }
        }

        ans=dp[n-1][0];
        for(int j=1;j<n;j++){
            ans=min(ans,dp[n-1][j]);
        }

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=0;
        int n=matrix.size();
        memset(dp,-100000,sizeof(dp));
        for(int j=0;j<n;j++){
                dp[0][j]=matrix[0][j];
        }
        working(n,matrix,ans);
        return ans;
    }
};