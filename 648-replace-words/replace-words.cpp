class Solution {
public:
    string findRoot(string &word, unordered_set<string> st){
        for(int i=0;i<word.size();i++){
            string temp=word.substr(0,i);
            if(st.find(temp)!=st.end()) return temp;
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st;
        for(int i=0;i<dictionary.size();i++){
            st.insert(dictionary[i]);
        }

        stringstream ss(sentence);
        string currword;
        string ans="";

        while(getline(ss,currword,' ')){
            ans+=findRoot(currword,st)+" ";
        }
        ans.pop_back();
        return ans;

    }
};