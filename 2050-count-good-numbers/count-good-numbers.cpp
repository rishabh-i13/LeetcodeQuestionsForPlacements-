class Solution {
public:
    long long M = 1e9 + 7;
    long long power(long long N, long long R)
    {
        if (R == 0)
            return 1;
        if (R == 1)
            return (N % 1000000007);
        long long ans = 1;
        long long know = power(N, R / 2) % 1000000007;
        if (R % 2)
            ans = (ans * N) % 1000000007;
        return (ans * ((know * know) % 1000000007)) % 1000000007;
    }
    int countGoodNumbers(long long n) {
        long long ans = 0;
        if (n % 2 == 0) {
            long long int even = power(5, n / 2) % M;
            long long int prime = power(4, n / 2) % M;
            ans = (even * prime) % M;
            return ans;
        } else {
            long long int even = power(5, (n + 1) / 2) % M;
            long long int prime = power(4, n / 2) % M;
            ans = (even * prime) % M;
            return ans;
        }
    }
};