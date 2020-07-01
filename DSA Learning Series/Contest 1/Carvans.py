t = int(input())
while(t>0):
    a=int(input())
    b=list(map(int,input().split()))
    r=1
    for j in range(a-1):
        if b[j]>=b[j+1]:
            r+=1
        else:
            b[j+1]=b[j]
    print(r)
    t-=1
