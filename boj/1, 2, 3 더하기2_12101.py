def sum_repeat(sum):
    global point
    for i in range(1,4):
        array.append(i)
        sum = sum + i
        if (sum == n):
            point = point + 1
            if (point == k):
                count = len(array)
                for i in range(count-1):
                    print(array[i], end='+')
                print(array[count-1])
                exit()
            else:
                array.pop()
        elif (sum<n):
            sum_repeat(sum)
            sum = sum - i
            array.pop()
        else:
            array.pop()

point = 0            

n , k = map(int, input().split())
array = []

sum_repeat(0)
print(-1)
