n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
mi, ma = a[0], b[0]
for i in range(1,n):
    mi = max(mi, a[i])
    ma = min(ma, b[i])
print(max(ma-mi+1,0))