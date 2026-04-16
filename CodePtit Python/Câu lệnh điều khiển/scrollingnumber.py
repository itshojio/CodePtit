def tinh(a):
    sum = 0
    for i in range(0,len(a)):
        sum += int(a[i])
    b = sum
    nguyen = b // 9
    du = b % 9
    if du == 0:
        return int(a)
    else :
        bu = 9 - du
        return int(a) + bu


while True:
    s = input().strip()
    if s == '-1':
        break
    print(tinh(s))