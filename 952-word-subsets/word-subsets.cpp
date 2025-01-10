class Solution {
public:
    //to get the char freq of each word in words2
    unordered_map<char,int> countFreq(string s){
        unordered_map<char,int> v;
        for(int i=0;i<s.size();i++){
            v[s[i]]++;
        }
        return v;
    } 
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char,int> mp;
        ///intially storing 0 freq to all chars
        for(char c='a';c<='z';c++){
            mp[c]=0;
        }
        //getting the maximum freq of a char in any word of words2 array
        for(const string &b:words2){
            unordered_map<char,int> temp1=countFreq(b);
            for(char t='a';t<='z';t++){
                mp[t]=max(mp[t],temp1[t]);
            }
        }
        //now gonna check which words in word1 array has all subsets 
        vector<string> ans;
        for(const string &a:words1){
            unordered_map<char,int> temp2=countFreq(a);
            bool flag=true;
            for(char c='a';c<='z';c++){
                if(temp2[c]>=mp[c]) continue;
                else flag=false;
            }

            if(flag==true) ans.push_back(a);
        }
        return ans;
    }
};