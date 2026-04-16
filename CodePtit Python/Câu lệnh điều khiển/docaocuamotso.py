def tinh(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total

def ktra(n,m):
    dem = 0
    for i in range(n):
        if tinh(i) == m:
            dem += 1

    return dem
while True:
    s = input().strip()
    if s == '-1':
        break

    n, m= map(int,s.split())   
    print(ktra(n,m))