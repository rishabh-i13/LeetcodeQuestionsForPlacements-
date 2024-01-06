class Solution
{
    public:
        int myAtoi(string s)
        {
            int n = s.size();
            double final = 0;
            int i = 0;

            while (s[i] == ' ')
            {
                i++;
            }

            bool pos=false, neg=false;
            if (s[i] == '+')
            {
                pos = true;
                i++;
            }
            else if (s[i] == '-')
            {
                neg = true;
                i++;
            }

            while(i<n and s[i]>='0' and s[i]<='9'){
                int current=s[i]-'0';
                final=final*10+current;
                i++;
            }

            if(neg==true){
                final=-1*final;
            }

            if(final>INT_MAX) return INT_MAX;
            else if(final<INT_MIN) return INT_MIN;
            else return int(final);


        }
};