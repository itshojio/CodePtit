def tkiem(a,n):
    max1 = max2 = -10**9
    for i in a:
        if i > max1 :
            max2 = max1
            max1 = i
        elif i > max2 :
            max2 = i 
    print(f"Silver = {max2}")


n = int(input())
a = []
for i in range(0,n):
    x = int(input())
    a.append(x)
tkiem(a,n)
