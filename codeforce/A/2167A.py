a = int(input())
while a > 0:

    n = input().split()
    if n[0] == n[1] and n[0] == n[2] and n[0] == n[3]:
        print("YES")
    else:
        print("NO")

    a-=1
