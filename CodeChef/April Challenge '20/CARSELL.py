t = int(input())
while(t>0): 
    n = int(input())
    a = input().split(' ')
    for i in range(n):
        a[i] = int(a[i])
    a.sort()
    a = a[::-1]
    c = 0
    for i in range (n):
        if(a[i]-i>0):
            c = c + (a[i]-i)
    print(c%1000000007)
    t-=1 
