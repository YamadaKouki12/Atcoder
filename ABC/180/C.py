n = int(input())
res = []

i = 1
while(i*i <= n):
    if n%i == 0:
        res.append(i)
        if i != n//i:
            res.append(n//i)
    i += 1
for _ in sorted(res):
    print(_)