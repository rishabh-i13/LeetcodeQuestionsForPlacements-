class Solution {
public:
    int minimumDeletions(string s) {
        int cnta = 0, cntb = 0, ans = 1e5;
        for(auto i : s) cnta += i == 'a';
        
        // Delete all the a's that could be possible ans 
        ans = cnta;

        for(int i = 0 ; i<s.length() ; i++){
            cntb += s[i] == 'b';
            cnta -= s[i] == 'a';

            ans = min(ans, cntb+cnta);
        } 

        return ans;
    }
};