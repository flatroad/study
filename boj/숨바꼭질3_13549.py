bullet = []
count = -1
dp = [99999]*100002

N, K = map(int, input().split())

H=K
if K%2==1 and K<100000:
    H=K+1

if (N>K):
    print(N-K)
    exit()

bullet.append((N, 0))

while(True):
    if(len(bullet)==0):
        print(dp[K])
        exit()
    queue = bullet[:]
    bullet.clear()
    for i, j in queue:
        if(dp[i]>j):
            dp[i]=j
            if(0<=i-1):
                bullet.append((i-1, j+1))
            if(i+1<=K):
                bullet.append((i+1, j+1))
            if(i*2<=H):
                bullet.append((i*2, j))

