class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ct=0;
        for(auto it:mp){
            int temp=it.second;
            if(temp<2) return -1;
            
            int t=(temp+2)/3;
            ct+=t;
        }
        
        return ct;
    }
};