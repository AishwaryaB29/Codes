t = int(input())
while(t>0): 
    n,q = input().split(' ')
    n = int(n)
    q = int(q)
    req = []
    for i in range (q):
        x,y = input().split(' ')
        req.append([int(x),int(y)])
    
    floors = 0
    prev = 0
    for i in range (q):
        floors+=abs(req[i][0]-req[i][1])
        floors+=abs(prev-req[i][0])
        prev=req[i][1]
    
    print(floors)
    t-=1 
