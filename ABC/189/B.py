n,x = map(int,input().split())
cnt = 0
for i in range(n):
    v,p = map(int,input().split())
    cnt += v*p
    if cnt > x*100:
        print(i+1)
        exit()
print(-1)