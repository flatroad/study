import sys
sys.setrecursionlimit(10**6)

readline = sys.stdin.readline

def repeat(i, j):   
    if arr[i][j]!=0:
        arr[i][j]=0
        if j+1<w:
            repeat(i, j+1)
        if 0<=j-1:
            repeat(i, j-1)
        if i+1<h:
            repeat(i+1, j)
        if 0<=i-1:
            repeat(i-1, j)
        if i+1<h and j+1<w:
            repeat(i+1, j+1)
        if 0<=i-1 and j+1<w:
            repeat(i-1, j+1)
        if i+1<h and 0<=j-1:
            repeat(i+1, j-1)
        if 0<=i-1 and 0<=j-1:
            repeat(i-1, j-1)



while(1):
    w, h = map(int, input().split())

    if(w==0 and h==0):
        exit()
    arr = [[0]*w]*h
    count = 0
    arr = [list(map(int, readline().split())) for _ in range(h)]
    for i in range(h):
        for j in range(w):
            if arr[i][j]!=0:
                repeat(i, j)
                count = count + 1

    print(count)




