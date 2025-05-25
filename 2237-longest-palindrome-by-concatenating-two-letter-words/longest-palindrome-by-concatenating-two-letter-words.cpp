class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            string temp2=words[i];
            swap(temp2[0],temp2[1]);
            if(mp.find(temp2)!=mp.end()){
                ans+=4;
                mp[temp2]--;
                if(mp[temp2]==0) mp.erase(temp2);
            }
            else mp[words[i]]++;
        }

        for(auto &it:mp){
            string w=it.first;
            int ct=it.second;

            if(w[0]==w[1]){
                ans+=2;
                break;
            }
        }

        return ans;
    }
};