class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
       int ct=0;
        for(int i=low;i<=high;i++){
            if(i>=10 and i<=99){
                if(i%10 ==i/10) ct++;
            }
            
            if(i>=1000 and i<=9999){
                if((i/100)/10 + (i/100)%10 == (i%100)/10+(i%100)%10) ct++;
            }
        }
        
        return ct;
    }
};