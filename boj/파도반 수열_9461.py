dp = [0]*103

def repeat(N):
    if(N==1):
        return 1
    if(N==2):
        return 1
    if(N==3):
        return 1
    if dp[N]:
        return dp[N]
    dp[N]=repeat(N-2)+repeat(N-3)
    return dp[N]

T = int(input())
i=0
while(i<T):
    N=int(input())

    print(repeat(N))

    i += 1