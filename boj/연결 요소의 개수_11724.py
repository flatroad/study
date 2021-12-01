import sys

N, M = map(int, sys.stdin.readline().split())

arr = [[] for _ in range(N+1)]
bullet = set()
k = 0

while(k<M):
    i, j = map(int, sys.stdin.readline().split())
    arr[i].append(j)
    arr[j].append(i)
    bullet.add(i)
    bullet.add(j)
    k = k + 1

count = len(range(N))-len(bullet)

bullet = list(bullet)

for i in bullet:
    queue = []
    queue.append(i)
    bullet.remove(i)
    for i in queue:
        for j in arr[i]:
            if j not in queue:
                queue.append(j)
                bullet.remove(j)               
    count= count + 1

print(count)