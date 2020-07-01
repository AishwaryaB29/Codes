import math
def decimalToBinary(n):  
    return bin(n).replace("0b", "")  
    
def binaryToDecimal(b_num):
    value = 0
    length = len(b_num)
    for i in range(length):
    	digit = b_num[::-1][0]
    	b_num = b_num[:len(b_num)-1:]
    	if digit == '1':
    		value = value + pow(2, i)
    return value
    
def fun(x,y):
    x2 = decimalToBinary(x)
    y2 = decimalToBinary(y)
    x2 = ('0'*(len(y2)-len(x2))) + x2
    
    l = []
    
    l.append(x|y)
    l2 = []
    for i in range (len(y2)):
        if(y2[i] == '1'):
            y3 = y2[:i:] + '0' + y2[i+1::]
            xyz = binaryToDecimal(y3) | x
            l2.append(xyz)
            l.append(xyz)
    for j in range (len(x2)):
            if(x2[j] == '1'):
                x3 = x2[:j:] + '0' + x2[j+1::]
                l.append(binaryToDecimal(x3) | y)
                for i in l2:
                    l.append(binaryToDecimal(x3) | i)
    return l

t = int(input())
while(t>0):
    s = input().split(' ')
    x = int(s[0])
    y = int(s[1])
    l = int(s[2])
    r = int(s[3])
    m = 0
    if(x>y):
        x,y = y,x 
    if(x ==0 or  y == 0):
    	print(l)
    else:
    	m = x | y 
    	if(m >= l and m <= r):
    	    print(m)
    	else:
    	    if(m > r):
        	    l2 = fun (x,y)
        	    l2.sort()
        	    l2 = l2[::-1]
        	    for i in l2:
        	        if (i>=l and i<=r):
        	            print(i)
        	            break
    	    
    
    t-=1
