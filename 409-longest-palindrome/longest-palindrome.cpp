class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;

        for(auto x:s){
            mp[x]++;
        }
        bool odd=false;
        int count=0;
        for(auto &it:mp){
            if(it.second%2!=0 and odd==false){
                count+=it.second;
                odd=true;
            }
            else if(it.second%2!=0 and odd==true){
                count+=(it.second-1);
            }
            else if(it.second%2==0) count+=it.second;

        }

        return count;
    }
};