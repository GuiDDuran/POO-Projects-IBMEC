t = int(input())
for case in range(1, t + 1):
    n = int(input())
    grades = list(map(int, input().split()))
    max_element = max(grades)
    max_size = 0
    count = 0
    for num in grades: 
        if num == max_element:
            count += 1
            max_size = max(max_size, count)
        else:
            count = 0
    print(f"Caso #{case}: {max_size}")

