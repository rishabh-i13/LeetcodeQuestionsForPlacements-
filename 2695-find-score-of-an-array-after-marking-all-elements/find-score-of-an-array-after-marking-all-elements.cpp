class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        set<pair<int,int>> st;
        for(int i=0;i<n;i++){
            st.insert({nums[i],i});
        }
        long long score=0;

        while(st.size()>0){
            auto p=*st.begin();
            int currIndex=p.second;
            score+=p.first;
            st.erase(p);

            if(currIndex-1>=0){
                pair<int,int> curr_left={nums[currIndex-1],currIndex-1};
                if(st.find(curr_left)!=st.end()){
                    st.erase(curr_left);
                }
            }
            if(currIndex+1<=n-1){
                pair<int,int> curr_right={nums[currIndex+1],currIndex+1};
                if(st.find(curr_right)!=st.end()){
                    st.erase(curr_right);
                }
            }
        }
        return score;
    }
};