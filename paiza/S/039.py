h, w = map(int, input().split())
s = []
for _ in range(h):
    tmp = input()
    s.append(list(tmp))
right = [w-1] * h
buttom = [h-1]* w

# calculate right
for i in range(h):
    for j in range(w):
        if s[i][j] == '#':
            right[i] = j
            break
# calculate buttom
for i in range(w):
    for j in range(h):
        if s[j][i] == '#':
            buttom[i] = j
            break

# print(right)
# print(buttom)
res = 0

# for i in range(h):
#     for j in range(w):
for i in range(1,2):
    for j in range(1,2):
        if s[i][j] == '#':
            continue
        r = right[i]
        b = j
        for k in range(i,r+1):
            b = min(b,buttom[k])
        print(i,r,j,b)
        if r-i<0 or b-j<0:
            continue
        area = (r-i) * (b-j)
        if res < area:
            res = area
print(res)

"""
6 6
#..#..
.....#
.#....
......
#...#.
.#.#..
"""