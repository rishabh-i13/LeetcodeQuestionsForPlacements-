class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<vector<int>,int> mp;
        vector<int> state(5,0); // a,e,i,o,u (00000)
        mp[state]=-1;
        int ans=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                state[0]=(state[0]+1)%2;
            }
            else if(s[i]=='e'){
                state[1]=(state[1]+1)%2;
            }
            else if(s[i]=='i'){
                state[2]=(state[2]+1)%2;
            }
            else if(s[i]=='o'){
                state[3]=(state[3]+1)%2;
            }
            else if(s[i]=='u'){
                state[4]=(state[4]+1)%2;
            }

            if(mp.find(state)!=mp.end()){
                ans=max(ans,i-mp[state]);
            }
            else{
                mp[state]=i;
            }
        }
        return ans;
    }
};