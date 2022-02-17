n, w = map(int, input().split())
ab = []
for i in range(n):
    a, b = map(int,input().split())
    ab.append([a,b])
ab.sort(key=lambda x: x[0], reverse=True)
res = 0
for i in range(n):
    res += ab[i][0]*min(w,ab[i][1])
    w -= ab[i][1]
    if w <= 0:
        break
print(res)