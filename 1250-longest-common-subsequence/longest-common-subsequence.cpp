class Solution {
public:
    int dp[1001][1001];
    int working(string &first,string &second,int i,int j){
        if(i==first.length() || j==second.length()) return 0 ;

        int count=0;
        if(dp[i][j]!=-1) return dp[i][j];

        if(first[i]==second[j]){
            count= 1 + working(first,second,i+1,j+1);
        }
        else{
            count= max(working(first,second,i,j+1),working(first,second,i+1,j));
        }
        return dp[i][j]=count;
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return working(text1,text2,0,0);
    }
};