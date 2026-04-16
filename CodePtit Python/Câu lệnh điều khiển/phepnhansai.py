def nhan(y,z):
    sum = 0
    k = y
    while k > 0 :
        sum += k % 10
        k //= 10
    x = z // sum
    return x
while True:
    s = input().strip()
    if s == '-1':
        break
    y, z = map(int,s.split())
    print(nhan(y,z))