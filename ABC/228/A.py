s,t,x = map(int, input().split())
if s<t:
    print('Yes' if s<=x<t else 'No')
else:
    print('Yes' if s<=x or x<t else 'No')