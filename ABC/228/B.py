n, x = map(int, input().split())
x -= 1
a = list(map(int, input().split()))
b = [False] * n

while True:
    if b[x] == True:
        print(sum(b))
        exit()
    else:
        b[x] = True
        x = a[x] - 1