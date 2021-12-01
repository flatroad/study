# BOTTON UP

N = int(input())

arr = [0]*(N)

arr = [int(input()) for _ in range(N)]

dp = [0]*(N)

N = N -1

if N>=0:
    dp[0]=arr[0]
if N>=1:
    dp[1]=arr[1]+arr[0]
if N>=2:
    dp[2]=max(arr[2]+arr[0], dp[1], arr[2]+arr[1])
if N<3:
    print(dp[N])
if N>=3:
    for i in range(3, N+1):
        dp[i]=max(arr[i]+arr[i-1]+dp[i-3], dp[i-1], arr[i]+dp[i-2])
if N>=3:
    print(dp[N])        