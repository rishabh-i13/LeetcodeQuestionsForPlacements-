class Solution {
    //Time Complexity:O(2^n*k)
    //IMPORTANT
public:
    void working(int index,int target,int N,vector<int> &temp,vector<int>& arrmain,vector<vector<int>> &answer){
        if(target==0){
            answer.push_back(temp);
            return;
        }
        for(int i=index;i<N;i++){
            if(i>index and arrmain[i]==arrmain[i-1]) continue;
            if(arrmain[i]>target) break;
            
            temp.push_back(arrmain[i]);
            working(i+1,target-arrmain[i],N,temp,arrmain,answer);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> answer;
        vector<int> temp;
        int N=candidates.size();
        working(0,target,N,temp,candidates,answer);
        return answer;
    }
};