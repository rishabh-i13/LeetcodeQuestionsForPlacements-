class Solution {
public:
    int m,n;
    int dp[501][501];
    int working(string &s1,string &s2,int i, int j){

        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m) return dp[i][j]=n-j;
        if(j==n) return dp[i][j]=m-i;

        if(s1[i]==s2[j]) return working(s1,s2,i+1,j+1);
        else{
            
            int insertC=1+working(s1,s2,i,j+1);

            int deleteC=1+working(s1,s2,i+1,j);

            int replaceC=1+working(s1,s2,i+1,j+1);

            return dp[i][j]=min({insertC,deleteC,replaceC});
        }

        return -1;
    }
    int minDistance(string word1, string word2) {
        m=word1.size();
        n=word2.size();
        memset(dp,-1,sizeof(dp));
        return working(word1,word2,0,0);
        
    }
};