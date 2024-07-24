class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> v;

        for(int i=0;i<nums.size();i++){
            string numStr=to_string(nums[i]);
            string mappedNum="";
            for(int j=0;j<numStr.size();j++){
                int t=numStr[j]-'0';
                mappedNum+=to_string(mapping[t]);
            }
            int mappedInt=stoi(mappedNum);
            v.push_back({mappedInt,i});
        }

        sort(begin(v),end(v));
        vector<int> ans;
        for(auto &it:v){
            ans.push_back(nums[it.second]);
        }
        return ans;
    }

};