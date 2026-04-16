def ktra(a):
    n = -1
    for i in a:
        if len(i) > n :
            n = len(i)
    for i in a:
        if len(i) == n:
            print(i ,n)
            return


a = list(map(str,input().split()))
ktra(a)