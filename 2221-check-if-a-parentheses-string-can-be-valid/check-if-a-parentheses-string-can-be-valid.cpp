class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if (n % 2 == 1) return false;

        // Left to Right Check
        int openCount = 0, wildCount = 0;
        for (int i = 0; i < n; i++) {
            if (locked[i] == '1') {
                if (s[i] == '(') openCount++;
                else openCount--;
            } else {
                wildCount++;
            }
            // If we have more ')' than possible '('
            if (openCount + wildCount < 0) return false;
        }

        // Right to Left Check
        int closeCount = 0;
        wildCount = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (locked[i] == '1') {
                if (s[i] == ')') closeCount++;
                else closeCount--;
            } else {
                wildCount++;
            }
            // If we have more '(' than possible ')'
            if (closeCount + wildCount < 0) return false;
        }

        return true;
    }
};
