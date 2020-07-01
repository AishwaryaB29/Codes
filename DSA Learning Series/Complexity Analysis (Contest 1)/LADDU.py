t = int(input())
while(t>0): 
    s = input().split(' ')
    n = int(s[0])
    og = s[1]
    s = []
    for i in range (n):
        s.append(input().split(' '))
    
    points = 0
    
    for i in s:
        if(i[0] == 'CONTEST_WON'):
            if(int(i[1])<20):
                points += 300 + (20 - int(i[1]))
            else:
                points += 300
        if(i[0] == 'TOP_CONTRIBUTOR'):
            points += 300 
        if(i[0] == 'BUG_FOUND'):
            points += int(i[1])
        if(i[0] == 'CONTEST_HOSTED'):
            points += 50
            
    if(og == 'INDIAN'):
        print(points//200)
    else:
        print(points//400)
    t-=1 
