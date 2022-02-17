s = input()
k = int(input())
n = len(s)
cnt = [0]*(n+1)
for i in range(n):
    cnt[i+1] = cnt[i] + int(s[i]=='.')
res,r = 0, 0
for l in range(n):
    while r<n and cnt[r+1]-cnt[l]<=k:
        r+=1
    res = max(res, r-l)
print(res)