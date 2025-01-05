class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size(); // Use the size of the string `s` for loops.
        vector<int> diff(n + 1, 0); // diff array size matches `n + 1` for 0-based indexing.

        // Apply the difference array technique
        for (auto& shift : shifts) {
            diff[shift[0]] += (shift[2] == 1) ? 1 : -1;
            diff[shift[1] + 1] += (shift[2] == 1) ? -1 : 1;
        }

        // Apply the accumulated shifts
        int shiftSum = 0;
        for (int i = 0; i < n; i++) {
            shiftSum = (shiftSum + diff[i]) % 26;
            shiftSum = (shiftSum + 26) % 26; // Ensure non-negative value
            s[i] = 'a' + (s[i] - 'a' + shiftSum) % 26;
        }

        return s;
    }
};
