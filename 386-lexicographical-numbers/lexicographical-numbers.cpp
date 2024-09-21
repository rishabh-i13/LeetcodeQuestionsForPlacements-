class Solution {
public:
    void working(int curr,int n,vector<int> &ans){
        if(curr>n) return;

        ans.push_back(curr);

        for(int append=0;append<=9;append++){
            int newNum=curr*10+append;

            if(newNum>n) return;

            working(newNum,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=9;i++){
            working(i,n,ans);
        }
        return ans;
    }
};