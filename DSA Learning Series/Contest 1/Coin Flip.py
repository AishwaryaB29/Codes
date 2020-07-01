t = int(input())
while(t>0): 
    g = int(input()) 
    while(g>0):
        a = input().split(' ')
        i = int(a[0])
        n = int(a[1])
        q = int(a[2])
        
        if(i == 1):
            if(q == 1):
                print(n//2)
            else:
                print(n-n//2)
        else:
            if(q == 2):
                print(n//2)
            else:
                print(n-n//2)
        g-=1
    t-=1 
