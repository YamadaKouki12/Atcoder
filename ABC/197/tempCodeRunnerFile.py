h, w, x, y = map(int,input().split())
x, y = x-1, y-1
maze = []
res = 1
for i in range(h):
    s = input()
    maze.append(s)
for i in range(x-1,-1,-1):
    if maze[y][i] == '#':
        break
    res += 1
for i in range(x+1,w,1):
    if maze[y][i] == '#':
        break
    res += 1
for i in range(y+1,h,1):
    if maze[i][x] == '#':
        break
    res += 1
for i in range(y-1,-1,-1):
    if maze[i][x] == '#':
        break
    res += 1
print(res)