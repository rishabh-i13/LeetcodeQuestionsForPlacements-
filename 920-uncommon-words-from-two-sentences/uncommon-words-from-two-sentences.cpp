class Solution {
public:
   vector<string> uncommonFromSentences(string A, string B) {
        
        vector<string> res;
        unordered_map<string, int> mp;
        
        string word = "";
        for(char ch : A)
        {
            if(ch == ' ')
            {
                mp[word]++;
                word = "";
            }
            else
                word += ch;
        }
        
        mp[word]++;
        word = "";
        
        for(char ch : B)
        {
            if(ch == ' ')
            {
                mp[word]++;
                word = "";
            }
            else
                word += ch;
        }
        
        mp[word]++;
        
        for(auto [key,val]: mp)
            if(val == 1) res.push_back(key);
        
        return res;
    }
};