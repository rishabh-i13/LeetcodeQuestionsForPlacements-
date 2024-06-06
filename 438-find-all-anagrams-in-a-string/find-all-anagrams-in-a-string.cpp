class Solution {
public:
    bool allZero(vector<int>& count) {
        return count==vector<int>(26, 0);
    }
    
    vector<int> findAnagrams(string txt, string pat) {
        int k = pat.size();
	    vector<int> count(26, 0);
        vector<int> v;
	    for(char &ch : pat) {
	        count[ch-'a']++;
	    }
	    int i = 0, j = 0;
	    int n = txt.size();
	    int result = 0;
	    while(j < n) {
	        int idx = txt[j]-'a';
	        count[idx]--;
	        
	        if(j - i + 1 == k) {
	            if(allZero(count)) {
	                v.push_back(i);
	            }
	            
	            count[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return v;
    }
};