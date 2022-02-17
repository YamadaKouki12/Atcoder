h, w = map(int, input().split())
a = [list(map(int,input().split())) for _ in range(h)]
for i in range(w):
    for j in range(h):
        if j!=0:
            print(' ',end='')
        print(a[j][i],end='')
    print()