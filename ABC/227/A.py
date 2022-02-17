n, k, a = map(int, input().split())
k %= n
print((a+k-1)%n if (a+k-1)%n else n)