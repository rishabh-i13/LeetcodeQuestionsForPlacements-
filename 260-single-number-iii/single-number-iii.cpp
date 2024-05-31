class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int temp=0;
        for(int i=0;i<nums.size();i++){
            temp^=nums[i];
        }

        // first find the most right set bit in temp;
        int x=temp & (-temp);
        int a=0,b=0;

        for(int i=0;i<nums.size();i++){
            if((nums[i]&x)==0){
                a=a^nums[i];
            }
            else{
                b=b^nums[i];
            }
        }
        return {a,b};
    }
};