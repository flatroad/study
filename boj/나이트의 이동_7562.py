from collections import deque
from sys import stdin

readline = stdin.readline

around = [(-1,-2),(-2,-1),(-2,+1),(-1,+2),(+1,+2),(+2,+1),(+2,-1),(+1,-2)]
que = deque()

T = int(readline())
k = 0

while(k<T):
    l = int(readline())
    arr = [[False] * l for _ in range(l)]
    x, y = map(int, readline().split())
    arr[y][x]=True
    que.append((y, x, 0))
    x, y = map(int, readline().split())
    end = (y, x)

    while(que):
        y, x, count = que.popleft()
        if (y, x) == end:
            print(count)
            que.clear()
            continue
        for i, j in map(lambda a: (y+a[0], x+a[1]), around):
            if(0<=i<l and 0<=j<l):
                if (arr[i][j]==False):
                    arr[i][j]=True
                    que.append((i, j, count + 1))
    k = k + 1
