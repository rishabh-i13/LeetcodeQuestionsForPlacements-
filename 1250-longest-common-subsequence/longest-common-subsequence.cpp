class Solution
{
    public:
        int dp[1001][1001];

    int workFunc(string &text1, string &text2, int i, int j)

    {
        if (i == text1.size() || j == text2.size()) return 0;

        if (dp[i][j] != -1) return dp[i][j];
        int count = 0;
        if (text1[i] == text2[j])
        {
            count = 1 + workFunc(text1, text2, i + 1, j + 1);
        }
        else
        {
            int moveFintext1 = workFunc(text1, text2, i + 1, j);
            int moveFintext2 = workFunc(text1, text2, i, j + 1);
            count = max(moveFintext1, moveFintext2);
        }

        return dp[i][j] = count;
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        memset(dp, -1, sizeof(dp));
        return workFunc(text1, text2, 0, 0);
    }
};