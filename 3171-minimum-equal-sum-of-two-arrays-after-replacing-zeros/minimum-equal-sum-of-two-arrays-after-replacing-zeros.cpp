class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=accumulate(nums1.begin(),nums1.end(),0ll);
        long long sum2=accumulate(nums2.begin(),nums2.end(),0ll);

        long long ct1_0=count(nums1.begin(),nums1.end(),0ll);
        long long ct2_0=count(nums2.begin(),nums2.end(),0ll);

        sum1+=ct1_0;
        sum2+=ct2_0;
        if(sum1>sum2){
            if(ct2_0==0) return -1;
        }
        if(sum2>sum1){
            if(ct1_0==0) return -1;
        }

        return max(sum1,sum2);
    }
};