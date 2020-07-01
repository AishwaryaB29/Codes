
n = int(input())
a = []
for i in range (n):
    a.append(int(input()))
a.sort()
b = []
for i in range (n):
    b.append(a[i]*(n-i))
    
print(max(b))
