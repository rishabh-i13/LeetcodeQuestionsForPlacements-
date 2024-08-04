class Solution {
public:
    long long M=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sumarr;

        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=i;j<n;j++){
                temp+=nums[j];
                sumarr.push_back(temp);
            }   
        }

        sort(begin(sumarr),end(sumarr));

        long long int ans=0;

        for(int i=left-1;i<=right-1;i++){
            ans= (ans+sumarr[i])%M;
        }

        return ans%M;
    }
};