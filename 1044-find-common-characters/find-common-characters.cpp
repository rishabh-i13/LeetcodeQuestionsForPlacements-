class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> ans;

       for(char ch='a';ch<='z';ch++){
        int min_ct=INT_MAX;

        for(string w:words){
            int ct=0;
            for(char c:w){
                if(c==ch) ct++;
            }
            min_ct=min(min_ct,ct);
        }
        string tmp="";
        tmp+=ch;
        for(int i=0;i<min_ct;i++){
            ans.push_back(tmp);
        }
       }
        return ans;
    }
};