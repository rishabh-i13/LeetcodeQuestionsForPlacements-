class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2==1) return false;

        stack<pair<char,int>> unlocked;
        stack<pair<char,int>> opening;

        for(int i=0;i<n;i++){
            if(locked[i]=='0') unlocked.push({locked[i],i});
            else if(s[i]=='(') opening.push({s[i],i});
            else if(s[i]==')'){
                if(opening.size()>0){
                    opening.pop();
                }
                else if(unlocked.size()>0) unlocked.pop();
                else return false;
            }
        }
        while(unlocked.size() and opening.size() && unlocked.top().second>opening.top().second){
            opening.pop();
            unlocked.pop();
        }
        if(opening.size()>0) return false;
        return true;

    }
};