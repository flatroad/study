N = int(input())

if(1<=N<=3):
    print(N)

else:
    l = 2
    k = 3
    a = [l, k]
    h = 0
    i = 4

    while(i<=N):
        h = a[0]+a[1]
        a[0]=a[1]
        a[1]=h
        i = i + 1
    print(a[1]%10007)
        
