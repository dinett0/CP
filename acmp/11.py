#Accepted solution.
#Theres also a .cpp version of this problem that is not working due to overflow(i dont know how to use __int128) 

def solve(stairs):
    if dp[stairs] == INF:
        up_to = k if stairs > k else stairs
        for i in range(1, up_to + 1):
            dp[stairs] += solve(stairs - i)
 
    return dp[stairs]
 
 
with open("INPUT.txt", "r") as file:
    for line in file:
        a = line.split()
k = int(a[0])
n = int(a[1])
dp = [0] * (330)
INF = 0
dp[0] = 1
print(solve(n))
