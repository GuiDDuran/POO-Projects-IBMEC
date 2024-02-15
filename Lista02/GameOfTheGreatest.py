while 1:
    n = int(input())
    count_a = 0
    count_b = 0
    if n == 0:
        break
    while n:
        a, b = map(int, input().split())
        if a == 0 and b == 0:
            break
        if a > b:
            count_a += 1
        if b > a:
            count_b += 1
        n -= 1
    print(f"{count_a} {count_b}")
    