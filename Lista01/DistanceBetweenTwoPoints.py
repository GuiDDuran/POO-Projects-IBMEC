import math

p01 = input().split()
p01_float = [float(p) for p in p01]
x1, y1= p01_float

p02 = input().split()
p02_float = [float(p) for p in p02]
x2, y2= p02_float

distance = (x2 - x1)**2 + (y2 - y1)**2
distance_sqrt = math.sqrt(distance)
print(f"{distance_sqrt:.4f}")