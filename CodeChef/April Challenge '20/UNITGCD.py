t = int(input())
while(t>0): 
    n = int(input())
    if(n!=1):
        print(n//2)
    else:
        print("1")
    if(n<=3):
        print(n,end= " ")
        for i in range (0,n):
            print(i+1,end = " ")
        print()
    else:
        print("3 1 2 3")
        i = 4
        while(i<=n):
            if(i+1<=n):
                print("2",i,i+1)
            else:
                print("1",i)
            i+=2
        
    t-=1 
