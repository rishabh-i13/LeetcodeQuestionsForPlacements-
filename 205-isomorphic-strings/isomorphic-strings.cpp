class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        bool f1=true,f2=true;
        map<char,char> mp1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mp1.find(s[i])==mp1.end()){
                mp1[s[i]]=t[i];
            }
            else{
                if(mp1[s[i]]==t[i]) continue;
                else {
                    f1=false;
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
                else {
                    f2=false;
                    break;
                }
            }
        }
        if(f1 and f2) return true;
        else return false;
    }
};