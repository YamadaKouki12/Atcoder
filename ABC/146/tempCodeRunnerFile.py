a,b,x = map(int, input().split())

def isok(arg):
    return a*arg+b*len(str(arg)) <= x

ok, ng = 0, 10**9+1

while ok<ng:
    mid = (ok+ng)//2
    if isok(mid):
        ok = mid
    else:
        ng = mid
print(ok)