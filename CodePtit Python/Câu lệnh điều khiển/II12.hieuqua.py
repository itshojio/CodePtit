def tinh(a,b):
    gio = phut = giay = 0
    oneday = 24 * 60 * 60 
    tong = 0
    atime = (a[0] * 60 * 60) + (a[1] * 60) + a[2]
    btime = (b[0] * 60 * 60) + (b[1] * 60) + b[2]
    if btime < atime :
        tong = oneday - atime + btime
    else:
        tong = btime - atime
    
    print(f"Thời gian thực hiện chương trình:{tong}")


a = list(map(int,input("Bắt đầu lúc ").split()))[:3]
b = list(map(int,input("Kết thúc lúc ").split()))[:3]
tinh(a,b)