n,a,b = map(int, input().split())
p,q,r,s = map(int, input().split())
f = ['.'*(q-p+1) for _ in range((s-r+1))]
for k in range(max(1-a,1-b),min(n-a,n-b)+1):
    pass