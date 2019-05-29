a=[]
for i in range(10001):
    s=i
    for j in range(50):
        j=j
        k=s
        ww=list(str(k))
        ww.reverse()
        ww=''.join(ww)
        add=s+int(ww)
        add=str(add)
        gg=list(add)
        gg.reverse()
        gg=''.join(gg)
        if gg!=add:
            s=int(add)
            if j+1==50:
                a.append(i)
        else:
            break
print(len(a))
