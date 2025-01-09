class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int k=pref.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(words[i].size()>=k){
                string temp=words[i].substr(0,k);
                if(temp==pref) count++;
            }
        }
        return count;
    }
};