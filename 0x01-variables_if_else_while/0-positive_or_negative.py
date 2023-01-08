import random

Max = 2147483647
n = (random.randint(0, Max))- (Max / 2)

if n == 0:
    print(n, "is zero")
elif n > 0:
    print (n, " is positive")
else :
    print (n, " is negative")
