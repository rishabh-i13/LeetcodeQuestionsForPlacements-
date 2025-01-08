class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j and i<j) { // Avoid comparing a word with itself
                    int k = words[i].size();
                    int m = words[j].size();
                    
                    // Only proceed if words[i] can fit within words[j]
                    if (k <= m) { 
                        string prefix = words[j].substr(0, k);      // First k characters
                        string suffix = words[j].substr(m - k, k); // Last k characters
                        
                        if (prefix == words[i] && suffix == words[i]) {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};
