class Solution {
public:
    int N;
    int canMakeMBouquet(vector<int>& bloomDay,int mid, int m, int k){
        int bouquetCnt=0;
        int ct=0;
        for(int i=0;i<N;i++){
            if(bloomDay[i]<=mid){
                ct++;
            }
            else ct=0;

            if(ct==k) {
                bouquetCnt++;
                ct=0;
            }
        }
        if(bouquetCnt>=m) return true;

        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        N=bloomDay.size();

        int start=0;
        int end=*max_element(bloomDay.begin(),bloomDay.end());

        int minDays=-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(canMakeMBouquet(bloomDay,mid,m,k)){
                minDays=mid;
                end=mid-1;
            }
            else start=mid+1;
        }

        return minDays;
    }
};