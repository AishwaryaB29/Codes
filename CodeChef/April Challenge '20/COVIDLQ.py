t = int(input())
while(t>0): 
    n = int(input())
    s = input().split(' ')
    f = 0
    found = 0
    dist = 0
    for i in s:
        if(i == '1' and found == 0):
            found = 1 
            continue
        if(i == '1' and found == 1):
            if(dist<5):
                f = 1 
                break
            dist = 0
        if(i == '0' and found == 1):
            dist+=1
            
    if(f == 0):
        print("YES")
    else:
        print("NO")
    t-=1 
