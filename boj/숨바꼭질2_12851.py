bullet = []
count = -1

dp = [99999]*100002

N, K = map(int, input().split())

H=K
if K%2==1 and K<100000:
    H=K+1

if (N>K):
    print(N-K)
    print(1)
    exit()

bullet.append(N)
cnt = 0

while(True):
    queue = []
    queue = bullet[:]
    count = count + 1
    bullet.clear()
    for i in queue:
        if dp[K]<count:
            print(cnt)
            exit()
        if(dp[i]>=count):
            dp[i]=count
            if(i==K):
                cnt = cnt + 1
                if (cnt == 1):
                    print(count)    
            if(0<=i-1):
                bullet.append(i-1)
            if(i+1<=K):
                bullet.append(i+1)
            if(i*2<=H):
                bullet.append(i*2)