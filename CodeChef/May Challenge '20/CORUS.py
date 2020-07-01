t = int(input())
while(t>0): 
    s = input().split(' ')
    n = int(s[0])
    q = int(s[1])
    s = input()
    freq = [0]*26
    for i in s:
        freq[ord(i)-97]+=1 
    for i in range (q):
        qu = 0
        c = int(input())
        for i in freq:
            if(i > c):
                qu = qu + (i-c)
        print(qu)
        
    t-=1 
