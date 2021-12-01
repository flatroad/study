# BOTTON UP

N = int(input())
dp = [0]*(N+1)
arr=[0]*(N+1)


if(N>0):
    i=0
    arr[i]=int(input())
    dp[0]=arr[0]
if(N>1):
    i=1
    arr[i]=int(input())
    dp[1]=arr[0]+arr[1]
if(N>2):
    i=2
    arr[i]=int(input())
    dp[2]=max(arr[0]+arr[2],arr[1]+arr[2])
if(N<4):
    print(dp[N-1])
for i in range(3,N):
    arr[i]=int(input())
    dp[i]=max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i])
if(N>=3):
    print(dp[N-1])

