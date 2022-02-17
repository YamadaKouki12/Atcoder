n = int(input())
s = set()
for a in range(2,n+1):
    if a*a > n:
        break
    for b in range(2,n+1):
        if a**b > n:
            break
        s.add(a**b)
print(n-len(s))