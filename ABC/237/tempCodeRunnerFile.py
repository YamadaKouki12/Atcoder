s = input()
s = s.rstrip('a')
for i in range(len(s)):
    if s[i] != s[len(s)-i-1]:
        print('No')
        exit()
print("Yes")