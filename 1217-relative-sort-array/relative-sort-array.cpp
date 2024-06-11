class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        map<int,int> mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }

        for(int i=0;i<arr2.size();i++){
            ans.insert(ans.end(),mp[arr2[i]],arr2[i]);
            mp.erase(arr2[i]);
        }

        for(auto it:mp){
            ans.insert(ans.end(),it.second,it.first);
        }

        return ans;
    }
};