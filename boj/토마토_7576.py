import sys

readline = sys.stdin.readline



M, N = map(int, input().split())    #M은 가로의 길이, N은 세로의 길이

arr = [[0]*M]*N
count = -1
arr = [list(map(int, readline().split())) for _ in range(N)]

list_one = []
for i in range(N):
    for j in range(M):
        if arr[i][j]==1:
            list_one.append([i,j])
yes = True
while(yes):
    queue = []
    for i in list_one:
        queue.append(i)
    count = count + 1
    list_one.clear()  
    for i in queue:
        a,b = i
        if a+1<N:
            if arr[a+1][b]==0:
                arr[a+1][b]=1
                list_one.append([a+1,b])
        if b+1<M:
            if arr[a][b+1]==0:
                arr[a][b+1]=1
                list_one.append([a, b+1])
        if 0<=a-1:
            if arr[a-1][b]==0:
                arr[a-1][b]=1
                list_one.append([a-1,b])
        if 0<=b-1:
            if arr[a][b-1]==0:
                arr[a][b-1]=1
                list_one.append([a,b-1])
    if len(list_one) == 0:
        yes = False

for i in range(N):
    if 0 in arr[i]:
        print(-1)
        exit()

print(count)
