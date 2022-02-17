n = int(input())
print('AGC0', end='')
if len(str(n)) ==1:
    print('0', end='')
if n >= 42:
    print(n+1)
else:
    print(n)
