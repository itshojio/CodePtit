import string

def coso (n,b):
    if n == 0:
        return "0"
    res = ""
    a = list(string.ascii_uppercase)
    indexch = []
    for i in range (10,37):
        indexch.append(i)
    if b == 2 :
        while n >= b :
            res += str(n % b)
            n //= b
        if n == 1 :
            res += str(1)
        else:
            res += str(0)
    else :
        while n >= b :
            if n % b >= 10 :
                res += str(a[indexch.index(n % b)])
                n //= b
            else :
                res += str(n % b)
                n //= b 
        if n >= 10:
            res += a[indexch.index(n)]
        else:
            res += str(n)
    return res[::-1]

while True:
    line = input().strip()
    if line == "-1":
        break

    n, b, c = map(int, line.split())

    x = coso(n, b)
    y = coso(n, c)

    if x == x[::-1] and y == y[::-1]:
        print("YES")
    else:
        print("NO")

#-----------------------------------------------------------CÁCH 2--------------------------------------------

import string

def coso (n,b):
    if n == 0:
        return "0"
    res = ""
    a = string.ascii_uppercase

    while n > 0 :
        du = n % b
        if du < 10 :
            res += str(du)
        else:
            res += str(a[indexch.index(du)])
        n //= b
    
    return res[::-1]

while True:
    line = input().strip()
    if line == "-1":
        break

    n, b, c = map(int, line.split())

    x = coso(n, b)
    y = coso(n, c)

    if x == x[::-1] and y == y[::-1]:
        print("YES")
    else:
        print("NO")