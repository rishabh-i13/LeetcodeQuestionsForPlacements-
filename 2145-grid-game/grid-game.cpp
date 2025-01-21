class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long upperRowSum = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        long long lowerRowSum = 0;
        long long answer = LLONG_MAX;

        for (int col = 0; col < grid[0].size(); ++col) {
            upperRowSum -= grid[0][col];
            answer = min(answer, max(upperRowSum, lowerRowSum));
            lowerRowSum += grid[1][col];
        }

        return answer; 
    }
};