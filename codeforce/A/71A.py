a = int(input())
while a > 0:
    n = input()
    if len(n) > 10:
        print(n[0]+str(len(n)-2)+n[len(n)-1])
    else:
        print(n)
    a-=1
