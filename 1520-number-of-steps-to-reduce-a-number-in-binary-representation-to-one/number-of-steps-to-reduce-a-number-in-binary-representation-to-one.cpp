class Solution {
public:
    int numSteps(string s) {
        int count=0;
        while(s.size()>1){
            if(s.back()=='0'){
                s.pop_back();
                count++;
                continue;
            }

            bool flag=false;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='0'){
                    s[i]='1';
                    flag=true;
                    break;
                }
                s[i]='0';
            }
            if(flag==false) s='1'+s;
            count++;
        }

        return count++;
    }
};