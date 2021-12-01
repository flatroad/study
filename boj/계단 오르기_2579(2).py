# TOP DOWN

def repeat(N):
    if N == 0:
        dp[0]=arr[0]
        return dp[0]
    if N == 1:
        dp[N]=arr[N]+arr[N-1]
        return dp[N]
    if N == 2:
        dp[N]=max(arr[N]+arr[N-1], arr[N]+arr[N-2])
        return dp[N]
    if dp[N]!=0:
        return dp[N]
    dp[N]=max(repeat(N-3)+arr[N-1]+arr[N], repeat(N-2)+arr[N])
    return dp[N]



N = int(input())
arr = [int(input()) for _ in range(N)]
dp = [0]*(N)
N = N-1
print(repeat(N))
