class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;

        unordered_map<char,int> mp;
        for(char c:s) {
            mp[c]++;
        }
        int oddCount=0;
        for(auto &p:mp){
            if(p.second%2!=0) oddCount++;
        }

        return (oddCount<=k);

    }
};