a=[1,1]
for i in range(10**10):
    a.append(a[-1]+a[-2])
    s=a[-1]
    s=str(s)
    if len(s) == 1000:
        print(i,len(s),len(a))
        print(a[-1])
        break
