s = input()
l = len(s) - len(s.lstrip('a'))
r = len(s) - len(s.rstrip('a'))
if r < l:
    print('No')
    exit()
s = s.strip('a')
if s == s[::-1]:
    print('Yes')
else:
    print('No')
