// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         long long int temp=0;
//         for(int i=0;i<nums.size();i++){
//             temp^=nums[i];
//         }

//         // first find the most right set bit in temp;
//         // long long int x=temp & -temp;
//         long long int x=log2(temp & -temp) + 1;
//         // int x=1;
//         // int prod=0;
//         // while(prod==0){
//         //     prod=temp&x;
//         //     if(prod==0) x<<1;
//         // }
//         // cout<<x;
//         int a=0,b=0;

//         for(int i=0;i<nums.size();i++){
//             if((nums[i]&x)==0){
//                 a=a^nums[i];
//             }
//             else{
//                 b=b^nums[i];
//             }
//         }
//         return {a,b};
//     }
// };
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long ans = 0;

        for(auto &num: nums){

            ans ^= num;
            
        }

        int check = ans & (-ans);

        int grpA = 0;
        int grpB = 0;

        for(auto &num: nums){

            if(check & num){
                grpA ^= num;
            }else{
                grpB ^= num;
            }
            
        }

        return {grpA,grpB};
        
    }
};