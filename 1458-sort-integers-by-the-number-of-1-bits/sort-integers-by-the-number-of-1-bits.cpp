class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int k=__builtin_popcount(arr[i]);
            mp[k].push_back(arr[i]);
        }
        vector<int> ans;
        for(auto it: mp){
            sort(it.second.begin(),it.second.end());
            ans.insert(ans.end(),it.second.begin(),it.second.end());
        }
        return ans;
    }
};