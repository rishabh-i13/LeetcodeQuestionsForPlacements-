class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256,-1);
        int left=0,right=0;
        int n=s.size();
        int ans=0;

        while(right<n){
            if(v[s[right]]!=-1){
                if(left<=v[s[right]]) left=v[s[right]]+1;
            }

            v[s[right]]=right;
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};