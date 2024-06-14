class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    int n = nums.size();
    int count = 0;
    int nextUnique = nums[0];

    for (int i = 0; i < n; ++i) {
        if (nums[i] < nextUnique) {
            count += nextUnique - nums[i];
        } else {
            nextUnique = nums[i];
        }
        nextUnique++;
    }

    return count;
    }
};