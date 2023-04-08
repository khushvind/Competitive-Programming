def solve():
    n,m = list(map(int,input().split()))
    a = list(map(int,input().split()))
    dx = []
    dy = []

    for i in range(0,4,2):
        dx.append(min(abs(1-a[i]),abs(n-a[i])))
        dy.append(min(abs(1-a[i+1]),abs(m-a[i+1])))
    # print (dx,dy)
    for i in range(1):
        if (dx[i] == 0 and dy[i] == 0) or (dx[i+1] == 0 and dy[i+1] == 0):
            print (2)
            break
        elif ((dx[i] == 0 and dy[i] > 0) or (dx[i] > 0 and dy[i] == 0)) or (dx[i+1] == 0 and dy[i+1] > 0) or (dx[i+1] > 0 and dy[i+1] == 0):
            print (3)
            break
        elif (dx[i] > 0 and dy[i] > 0) or (dx[i+1] > 0 and dy[i+1] > 0):
            print (4)
            break
for _ in range(int(input())):
    solve()