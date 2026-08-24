a = int(input())
sum = 0
sum_1 = 0
while a > 0:
    n = input().strip().split()

    for i in range(0,3):
        if n[i] == '1':
            sum = sum + 1
    if sum >= 2:
        sum_1 += 1
    sum = 0

    a-=1
print(sum_1)
