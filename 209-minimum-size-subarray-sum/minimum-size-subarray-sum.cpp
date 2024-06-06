class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minL = INT_MAX; // Set to a large value
        int i = 0, j = 0;
        long long sum = 0;
        int n = nums.size();

        while (j < n) {
            sum += nums[j];
            while (sum >= target) {
                minL = min(minL, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++; // Increment j in each iteration
        }
        
        // If minL was never updated, return 0 (no valid subarray found)
        return (minL == INT_MAX) ? 0 : minL;
    }
};
