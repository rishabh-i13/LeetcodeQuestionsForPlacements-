class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprof=0
        n=len(prices)
        minval=prices[0]
        
        for i in range (0,n):
            currprof=prices[i]-minval
            maxprof=max(maxprof,currprof)
            minval=min(minval,prices[i])
        
        return maxprof
        