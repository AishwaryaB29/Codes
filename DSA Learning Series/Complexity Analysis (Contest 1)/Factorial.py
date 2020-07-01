t = int(input())
while(t>0): 
    n = int(input())
    x = 5
    f = 1 
    c = 0
    while(f==1):
        c += n//x 
        x = x*5 
        if(n//x == 0):
            f = 0
    print(c)
    t-=1 
