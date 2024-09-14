class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int t=nums[i];
            vector<int> temp;
            for(int j=1;j*j<=t;j++){
                if(t%j==0){
                    temp.push_back(j);
                    if(t/j!=j) temp.push_back(t/j);
                }
            }
            if(temp.size()==4){
                for(auto val:temp){
                    ans+=val;
                }
            };
            temp.clear();
        }

        return ans;
    }
};