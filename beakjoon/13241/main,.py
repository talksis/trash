import math
a,b =map(int,input().split())
f = int(a*b/math.gcd(a,b))
print(f)

