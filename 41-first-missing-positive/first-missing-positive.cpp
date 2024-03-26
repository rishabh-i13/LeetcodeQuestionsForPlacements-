class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        set<int> s;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
            s.insert(arr[i]);
            }
        }
        int ct=1;
        for(auto x:s){
            if(x!=ct){
                return ct;
            }
            ct++;
        }
        return ct;
    }
};