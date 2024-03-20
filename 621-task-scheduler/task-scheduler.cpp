class Solution
{
    public:
        int leastInterval(vector<char> &tasks, int n)
        {
            int N=tasks.size();
            int maxFreq = 0;
            int countMaxFreq = 0;
            int counter[26] = { 0 };

            for (int i: tasks)
            {
                counter[i - 'A']++;
            }

            for (int x: counter)
            {
                if (x == maxFreq)
                {
                    countMaxFreq++;
                }

                if (maxFreq < x)
                {
                    maxFreq = x;
                    countMaxFreq = 1;
                }
            }

            int gaps=maxFreq-1;// maximum gaps

            int gaps_length=n-(countMaxFreq-1);// gaps length

            int total_slots_available=gaps_length*gaps;

            int total_tasks_left=N-maxFreq*countMaxFreq;

            int idle=max(0,(total_slots_available)-(total_tasks_left));

            int ans=N+idle;

            return ans;
        }
};