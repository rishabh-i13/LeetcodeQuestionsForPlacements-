class Solution {
public:
    int countLargestGroup(int n) {
        map<int,int> mp;
        for(int i=1;i<=36;i++){
            mp[i]=0;
        }

        for(int i=1;i<=n;i++){
            int t=i;
            int digisum=0;
            while(t!=0){
                int r=t%10;
                t=t/10;
                digisum+=r;
            }
            mp[digisum]++;
        }
        int maxcount=0;
        for(auto it:mp){
            maxcount=max(maxcount,it.second);
        }
        int count=0;
        for(auto it:mp){
            if(it.second==maxcount) count++;
        }

        return count;
    }
};