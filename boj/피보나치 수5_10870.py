def repeat(N):
    if(N==0):
        return 0
    elif(N==1):
        return 1
    else:
        return repeat(N-1)+repeat(N-2)

N = int(input())

print(repeat(N))