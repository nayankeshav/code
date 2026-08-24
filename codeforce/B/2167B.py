a = int(input())
while a > 0:
    n = int(input())
    words = input().split()
    sum = 0
    for i in range(0,n):
        for z in range(0, len(words[1])):
            if words[0][i] == words[1][z]:
                sum = sum + 1
                words[1] = words[1].replace(words[1][z], '', 1)
                break
    if sum == n:
        print("YES")
    else:
        print("NO")
    a = a - 1
