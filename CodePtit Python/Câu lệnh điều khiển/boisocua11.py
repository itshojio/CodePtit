def tinh(a):
    if int(a) % 11 == 0:
        print("YES")
    else:
        print("NO")

while True:
    s = input().strip()
    if s == '-1':
        break
    tinh(s)