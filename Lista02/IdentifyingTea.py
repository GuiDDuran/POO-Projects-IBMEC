tea = int(input())
a, b, c, d, e = map(int, input().split())
winner = 0
if a == tea:
    winner += 1
if b == tea:
    winner += 1
if c == tea:
    winner += 1
if d == tea:
    winner += 1
if e == tea:
    winner += 1
print(winner)