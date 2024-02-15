two = 0
three = 0
four = 0
five = 0
amount = int(input())
numbers = list(map(int, input().split()))
for num in numbers:
    if (num % 2 == 0):
        two += 1
    if (num % 3 == 0):
        three += 1
    if (num % 4 == 0):
        four += 1
    if (num % 5 == 0):
        five += 1
print(f"{two} Multiplo(s) de 2")
print(f"{three} Multiplo(s) de 3")
print(f"{four} Multiplo(s) de 4")
print(f"{five} Multiplo(s) de 5")