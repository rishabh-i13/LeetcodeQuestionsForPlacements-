class Solution {
public:
    vector<int> count = vector<int>(201, 0);

    vector<int> frequencySort(vector<int>& nums) {
        
        for (int num : nums) {
            count[num + 100]++;
        }
        auto comparator = [this](int a, int b) {
            if (count[a + 100] == count[b + 100])
                return a > b;
            return count[a + 100] < count[b + 100];
        };

        sort(nums.begin(), nums.end(),comparator);
        return nums;
    }
};