n = int(input())
while n:
    x, y = map(int, input().split())
    kite = int((x * y) / 2)
    n -= 1
    print(f"{kite} cm2")