n = int(input())
s = list(map(int, input().split()))
res = n
for i in range(n):
    flag = False
    for a in range(1,s[i]+1):
        for b in range(1,s[i]+1):
            if 4*a*b+3*a+3*b>s[i]:
                break
            if 4*a*b+3*a+3*b == s[i]:
                flag = True
    if flag:
        res-=1
print(res)