from math import remainder


n = int(input())

remainder = [0,0,0]
for c in str(n):
    remainder[int(c)%3] += 1
if n%3 ==0:
    print(0)
    exit()
elif n%3 == 1:
    if remainder[1]>0 and len(str(n))>1:
        print(1)
        exit()
    elif remainder[2]>1 and len(str(n))>2:
        print(2)
        exit()
else:
    if remainder[2]>0 and len(str(n))>1:
        print(1)
        exit()
    elif remainder[1]>1 and len(str(n))>2:
        print(2)
        exit()
    
print(-1)