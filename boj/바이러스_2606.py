def BFS_C(K):
    queue.append(K)
    #que.append(K)
    for i in queue:
        for j in arr[i]:
            if j not in queue:
                # que.append(j)
                queue.append(j)
    print(len(queue)-1)


N = int(input())
M = int(input())

k=0
arr = [[] for _ in range(N+1)]
queue = []

while(k<M):
    i, j = map(int, input().split())
    arr[i].append(j)
    arr[j].append(i)
    k = k + 1

if arr[1]==0:
    print(0)
    exit()

BFS_C(1)