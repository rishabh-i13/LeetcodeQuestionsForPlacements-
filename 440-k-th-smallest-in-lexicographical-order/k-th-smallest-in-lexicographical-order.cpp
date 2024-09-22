class Solution {
public:
    // Helper function to count how many numbers lie between `curr` and `curr + 1` in lexicographical order.
    long long countSteps(long long curr, long long n) {
        long long steps = 0;
        long long first = curr, last = curr;
        
        while (first <= n) {
            steps += min(last, n) - first + 1;
            first *= 10;
            last = last * 10 + 9;
        }
        
        return steps;
    }
    
    int findKthNumber(int n, int k) {
        long long curr = 1;
        k--;  // We are looking for the (k-1)th number in 0-indexed form.

        while (k > 0) {
            long long steps = countSteps(curr, n);
            
            if (steps <= k) {
                // If the steps are less than or equal to k, move to the next prefix
                k -= steps;
                curr++;
            } else {
                // If the steps are more than k, go to the next level (next digit).
                k--;
                curr *= 10;
            }
        }

        return curr;
    }
};
