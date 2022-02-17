def func(x):
    pass
    g1 = int(''.join(sorted(str(x))[::-1]))
    g2 = int(''.join(sorted(str(x))))
    return g1-g2
n, k = map(int, input().split())
for i in range(k):
    n = func(n)
print(n)