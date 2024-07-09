class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int start=customers[0][0];
        int finish=start+customers[0][1];
        long long int waiting=finish-start;

        for(int i=1;i<n;i++){
            if(customers[i][0]<finish){
                waiting+=finish-customers[i][0];
                start=finish;
                waiting+=customers[i][1];
                finish=start+customers[i][1];
            }
            else{
                start=customers[i][0];
                finish=start+customers[i][1];
                waiting+=finish-start;
            }
        }
        cout<<waiting;
        double ans=static_cast<double>(waiting) / static_cast<double>(n);
        return ans;
    }
};