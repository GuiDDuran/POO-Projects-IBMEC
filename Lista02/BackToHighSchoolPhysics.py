while True:
    try:
        v, t = map(int, input().split())
        result = 0
        result = (v * t) * 2
        print(result)
    except EOFError:
        break