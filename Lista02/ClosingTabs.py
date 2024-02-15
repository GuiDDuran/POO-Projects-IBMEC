n, m = map(int, input().split())
for action in range(m):
    option = input()
    if option == "fechou":
        n += 1
    if option == "clicou":
        n -= 1
print(n)