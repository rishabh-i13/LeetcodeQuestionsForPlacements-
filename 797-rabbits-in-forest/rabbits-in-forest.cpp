class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> mp;
        int n=answers.size();

        for(int i:answers) mp[i]++;

        int count=0;

        for(auto it:mp){
            int a=it.first;
            int b=it.second;
            if((a+1)==b) count+=b;
            else if((a+1)>b) count+=(a+1);
            else if((a+1)<b){
                if(b%(a+1)==0) count+=b;
                else{
                    count+=((b/(a+1))+1)*(a+1);
                }
            }
        }

        return count;
    }
};