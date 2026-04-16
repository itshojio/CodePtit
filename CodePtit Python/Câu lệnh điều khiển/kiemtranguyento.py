def ktrasnt(n):
    if n <= 1 : return False
    if n == 2 : return True
    if n % 2 == 0 : return False
    for i in range(3,int(n**0.5)+1,2):
        if n % i == 0 :
            return False
    return True

def ktra(a,n,m):
    b = [[0] * m for _ in range(n)]

    for i in range(0,n):
        for j in range(0,m):
            if ktrasnt(a[i][j]) :
                b[i][j] = 1
            
    return b


n, m = map(int,input().split())
a = [list(map(int,input().split()))[:m] for _ in range(n)]
b = ktra(a,n,m)
for i in b :
    print(*i)