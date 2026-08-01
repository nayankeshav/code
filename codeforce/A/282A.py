a = int(input())
x = 0
while a > 0:
    n = input().strip()
    if n.replace('X','') == '++':
        x+=1
    else:
        x-=1
    a-=1
print(x)
