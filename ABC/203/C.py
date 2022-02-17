n,k = map(int,input().split())
friends = []
for _ in range(n):
    a,b = map(int,input().split())
    friends.append([a,b])
friends.sort()

for i in range(n):
    if friends[i][0] <= k:
        k += friends[i][1]
    else:
        break
print(k)