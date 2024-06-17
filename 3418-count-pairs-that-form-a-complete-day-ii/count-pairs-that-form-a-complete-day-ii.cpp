class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        
        unordered_map<int,int> mp;
        long long ans=0;
        for(int i=0;i<hours.size();i++){
            int temp=(24-hours[i]%24)%24;
            ans+=mp[temp];
            mp[hours[i]%24]++;
        }

        return ans;
    }
};