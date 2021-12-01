T = int(input())

for _ in range(T):
    n = int(input())

    dp = [0]*1000000

    dp[1]=1
    dp[2]=2
    dp[3]=4

    if n > 3:
      for i in range(4,n+1):
          for j in range(1,4):
              dp[i]=dp[i-j]+dp[i]

    print(dp[n])