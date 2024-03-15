class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //   int n=nums.size();
    //   vector<long long> front(8);
    //   vector<long long> back(8);

    //   int prefix=1;

    //   for(int i=0;i<n;i++){
    //     front[i]=prefix;
    //     prefix*=nums[i];
    //   }

    //   int postfix=1;
    //   for(int i=n-1;i>=0;i--){
    //     back[i]=postfix;
    //     postfix*=nums[i];
    //   }

    //   vector<int> ans;
    //   for(int i=0;i<n;i++){
    //     ans.push_back(front[i]*back[i]);
    //   }
    //   return ans
    int n=nums.size();
        long long int front[n];
        long long int back[n];
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            front[i]=prefix;
            prefix*=nums[i];
        }
        int postfix=1;
        for(int i=n-1;i>=0;i--){
            back[i]=postfix;
            postfix*=nums[i];
        }
        vector< int> answer;
        for(int i=0;i<n;i++){
            answer.push_back(front[i]*back[i]);
        }
        return answer;;
    }
};