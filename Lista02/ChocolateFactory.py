while True:
    a, b, c = map(int, input().split())
    if (a == 0 and b == 0 and c == 0):
        break
    else:
        volume_p = int(a * b * c)
        volume_c = int(volume_p ** (1/3))
        print(volume_c)