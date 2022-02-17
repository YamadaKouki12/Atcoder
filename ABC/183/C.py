import itertools

n,k = map(int,input().split())
t = []
for _ in range(n):
    __ = list(map(int,input().split()))
    t.append(__)

res = 0
for route in itertools.permutations(range(1,n)):
    route = [0] + list(route) + [0]
    time = 0
    for i in range(len(route)-1):
        time += t[route[i]][route[i+1]]
    res += int(time == k)
print(res)
