class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int timeDetect=minutesToDie;
        int timeTest=minutesToTest;
        return ceil(log2(buckets)/log2(int(timeTest/timeDetect)+1));
    }
};