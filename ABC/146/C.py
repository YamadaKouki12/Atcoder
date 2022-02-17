a,b,x = map(int, input().split())

def isok(arg):
    return a*arg+b*len(str(arg)) <= x

def bisect(ok,ng):
    while abs(ok-ng)>1:
        mid = (ok+ng)//2
        if isok(mid):
            ok = mid
        else:
            ng = mid
    return ok
print(bisect(0,10**9+1))