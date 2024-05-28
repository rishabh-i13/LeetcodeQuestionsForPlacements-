class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int price=0;
        int n= s.size();
        int left = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            int x=abs(s[i]-t[i]);
            price+=x;
            while(price > maxCost){
                price -= abs(s[left]-t[left]);
                left++;
            }
            ans = max(i-left+1, ans);
        }

        return ans;
    }
};