values = input().split()
values_int = [int(v) for v in values]
a, b, c = values_int
maior = 0
for i in values_int:
    if i > maior:
        maior = i
print(f"{maior} eh o maior")