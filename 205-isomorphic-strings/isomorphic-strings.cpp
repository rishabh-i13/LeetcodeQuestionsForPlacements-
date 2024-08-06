class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //if size id not equal they will never be isomorphic
        if(s.size()!=t.size()) return false;
        map<char,char> mp;
        bool flag1=true,flag2=true;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
            }
            else{
                if(mp[s[i]]==t[i]) continue;
                else {
                    flag1=false;
                    break;
                }
            }
        }
        map<char,char> mp2;
        for(int i=0;i<n;i++){
            if(mp2.find(t[i])==mp2.end()){
                mp2[t[i]]=s[i];
            }
            else{
                if(mp2[t[i]]==s[i]) continue;
                else{
                    flag2=false;
                    break;
                }
            }
        }

        if(flag1 and flag2) return true;
        else return false;
    }
};