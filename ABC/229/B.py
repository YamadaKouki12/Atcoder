a,b = map(int, input().split())
while a or b:
    if a%10 + b%10 >= 10:
        print('Hard')
        exit()
    a//=10
    b//=10
print('Easy')