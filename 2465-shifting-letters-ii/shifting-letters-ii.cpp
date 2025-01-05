class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> diff(n+1,0);
        for(auto shift:shifts){
            diff[shift[0]]+=(shift[2]==1)?1:-1;
            diff[shift[1]+1]+=(shift[2]==1)?-1:1;
        }

        int shiftSum=0;

        for(int i=0;i<n;i++){
            shiftSum=(shiftSum+diff[i])%26;
            shiftSum=(shiftSum+26)%26;
            s[i]='a'+((s[i]-'a')+shiftSum)%26;
        }
        return s;
        
    }
};