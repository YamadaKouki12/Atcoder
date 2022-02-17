s,t,x = map(int, input().split())
if s>t:
    t+=24
if s<=x<t:
    print('Yes')
else:
    print('No')