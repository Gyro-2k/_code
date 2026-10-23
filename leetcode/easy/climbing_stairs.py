class Solution:
    def climbStairs(self, n: int) -> int:
        
        # edge case when stair is <=2
        if n<=2:
            return n
        
        # first create an list of only 0 of size n+1
        stairs = [0]*(n+1)

        # first 2 are 1 and 1, if there are 1 and 2 stairs
        # stairs[0] is not required here as we have already counted for the edge cased
        stairs[1]=1
        stairs[2]=2

        # now we make the array by adding the previous two stairs count
        # logic is same as the fibonacchi sequence
        for loop in range(3,n+1):
            stairs[loop] = stairs[loop-1]+stairs[loop-2]

        return stairs[n]


        # !!!TLE!!!
        # # kind of like fibonacchi
        # # stairs(n) = stairs(n-1) + stairs(n-2)
        # # stairs(0)=1 and stairs(1)=1
        # if n<=1:
        #     return 1
        # return self.climbStairs(n-1) + self.climbStairs(n-2)
