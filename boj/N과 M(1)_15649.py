def arr_make (i, N, K, arr):
    i = i + 1
    if(empty(i, arr)):
        if(i==K):
            for i in range(1, K-1):
                print(arr[i], end=' ')
            print(arr[K-1])
        else:
            for j in range(1, N+1):
                arr[i]=j
                arr_make(i, N, K, arr)

def empty (i, arr):
    c = 1
    
    while (c<i-1):
        if(arr[i-1]==arr[c]):
            return False
        c = c + 1
    return True

N, M = input().split()

N = int(N)
M = int(M)

arr = [0]*(M+1)

K = len(arr)

arr_make(0, N, K, arr)