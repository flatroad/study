 # 10828 - 스택

import sys

t = int(sys.stdin.readline().rstrip())
numList = []

for i in range(t):
    tmpCom = sys.stdin.readline().rstrip()
    if tmpCom.find(' ') != -1:
        com, num = tmpCom.split()
        num = int(num)
    else:
        com = tmpCom
        num = 0
    
    if com == 'push':
        numList.append(num)
    elif com == 'pop':
        if len(numList) == 0:
            print(-1)
        else:
            print(numList.pop())
    elif com == 'size':
        print(len(numList))
    elif com == 'empty':
        print(0) if len(numList) != 0 else print(1)
    else:
        if len(numList) != 0:
            print(numList[len(numList)-1])
        else:
            print(-1)
