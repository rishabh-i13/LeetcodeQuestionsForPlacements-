class Solution {
public:
    bool isPossible(vector<int>& position,int force, int m){
        int prevPos=position[0];
        int ct=1;

        for(int i=1;i<position.size();i++){
            int currPos=position[i];
            if(currPos-prevPos>=force){
                ct++;
                prevPos=currPos;
            }
        }

        if(ct>=m) return true;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n= position.size();
        sort(begin(position),end(position));
        int minF=1;
        int maxF=position[n-1]-position[0];
        int ans=0;

        while(minF<=maxF){

            int mid=minF+(maxF-minF)/2;

            if(isPossible(position,mid,m)){
                ans=mid;
                minF=mid+1;
            }
            else{
                maxF=mid-1;
            }
        }
        return ans;
    }
};