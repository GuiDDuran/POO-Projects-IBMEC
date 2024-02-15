while True:
    try:
        a, b = map(int, input().split(":"))
        if a < 7 or (a == 7 and b == 0):
            print("Atraso maximo: 0")
        else:
            delay = (a - 7) * 60 + b
            print(f"Atraso maximo: {delay}")
    except EOFError:
        break