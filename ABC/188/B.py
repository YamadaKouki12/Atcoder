n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

res = 0
for i in range(n):
    res += a[i]*b[i]
print('Yes') if res==0 else print('No')