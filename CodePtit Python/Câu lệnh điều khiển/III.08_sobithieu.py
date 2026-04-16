import sys
def tim(a,n):
    tong = 0
    for i in a:
        tong += i
    total = (n * (n+1) ) // 2
    print(total - tong)

n = int(sys.stdin.readline())
a = set()
for _ in range(n-1):
    a.add(sys.stdin.readline())

tim(a,n)