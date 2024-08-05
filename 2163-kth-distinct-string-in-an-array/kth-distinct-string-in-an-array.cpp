class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto &s:arr){
            mp[s]++;
        }
        int ct=0;
        for(auto &s:arr){
            if(mp[s]==1){
                ct++;
                if(ct==k) return s;
            }
        }
        return "";
    }
};