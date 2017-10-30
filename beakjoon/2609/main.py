import math
a,b =map(int,input().split())
gcd = math.gcd(a,b)
f = int(a*b/gcd)
print(gcd, f,sep='\n',end='')

