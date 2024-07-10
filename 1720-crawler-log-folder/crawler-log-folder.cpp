class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;

        for(auto s:logs){
            if(s=="./") continue;
            else if(s=="../"){
                if(count>0) count--;
                else continue;
            };
            if(s[0]!='.') count++;
        }

        return count;
    }
};