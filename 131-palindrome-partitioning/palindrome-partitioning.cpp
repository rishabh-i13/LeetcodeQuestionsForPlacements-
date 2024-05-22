class Solution {
public:
    bool ispal(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }


    void working(int index,int N,string  s, vector< string > &temp, vector<vector<string>> &answer){
        if(index==N){
            answer.push_back(temp);
            return;
        }
        for(int i=index;i<N;i++){
            if(ispal(s,index,i)){
                string x=s.substr(index,i-index+1);
                temp.push_back(x);
                working(i+1,N,s,temp,answer);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> temp;
        int N=s.size();
        working(0,N,s,temp,answer);
        return answer;
    }
};