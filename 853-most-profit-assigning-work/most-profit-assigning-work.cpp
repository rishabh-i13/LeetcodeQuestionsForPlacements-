class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans=0;
        vector<pair<int,int>> v;
        int n= difficulty.size();
        int m=worker.size();

        priority_queue<int> pq;

        for(int i=0;i<n;i++){
            v.push_back({difficulty[i],profit[i]});
        }
        sort(begin(v),end(v));
        sort(begin(worker),end(worker));

        int i=0;// for workers array
        int j=0;// for dificulty array

        while(i<m){
            while(j<n and v[j].first<=worker[i]){
                pq.push(v[j].second);
                j++;
            }
            i++;

            if(!pq.empty()){
                ans+=pq.top();
            }
        }
        return ans;
    }
};