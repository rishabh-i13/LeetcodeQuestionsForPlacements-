class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long int> fromLeft;
        vector<long long int> fromRight;
        int n=nums.size();
        long long int leftSum=0;
        for(int i=0;i<n;i++){
            leftSum+=nums[i];
            fromLeft.push_back(leftSum);
        }
        long long int rightSum=0;
        for(int i=n-1;i>=0;i--){
            rightSum+=nums[i];
            fromRight.push_back(rightSum);
        }
        reverse(fromRight.begin(),fromRight.end());
        int count=0;
        for(int i=0;i<n-1;i++){
            if(fromLeft[i]>=fromRight[i+1]) count++;
        }
        return count;
    }
};