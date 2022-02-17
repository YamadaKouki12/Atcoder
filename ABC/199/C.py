n = int(input())
s = input()
q = int(input())

flip = False
s = list(s)
for i in range(q):
    t, a, b = map(int, input().split())
    a, b = a-1, b-1
    if t == 2:
        flip = not flip
        continue
    if flip:
        a = a+n if a<n else a-n
        b = b+n if b<n else b-n
    s[a], s[b] = s[b], s[a]
    
if flip:
    s = s[n:] + s[:n]
print(''.join(s))