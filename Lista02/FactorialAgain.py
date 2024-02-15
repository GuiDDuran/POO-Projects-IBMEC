import math
while True:
    num = input()
    result = 0
    factorial = 1
    if int(num) == 0:
        break
    for number in reversed(num):
        result = result + int(number) * math.factorial(factorial)
        factorial += 1
    print(result)
