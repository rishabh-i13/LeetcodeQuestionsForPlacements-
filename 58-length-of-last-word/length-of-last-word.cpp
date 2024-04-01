class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==1) return 1;
        reverse(s.begin(),s.end());
        int i=0,j=0;
        while(s[i]==' '){
            i++;
            j++;
        }
        while(s[j]!=' ' and j<s.size()){
            j++;
        }

        return j-i;
        
    }
};