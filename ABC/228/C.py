n, k = map(int, input().split())
s = []
for i in range(n):
    s.append(sum(list(map(int, input().split()))))
s_sorted = sorted(s ,reverse=True)
ma = s_sorted[k-1]

for i in range(n):
    print('Yes' if s[i]+300 >= ma else 'No')