a=[1 for i in range(0,21)]
for i in range(1,21):
    for j in range(1,21):
        a[j]=a[j-1]+a[j]
print(a)
