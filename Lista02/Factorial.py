factorial = [40320, 5040, 720, 120, 24, 6, 2, 1]
n = int(input())
result = 0
for f in factorial:
    result += n//f
    n %= f
print(result)