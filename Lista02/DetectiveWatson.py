while True:
    n = int(input())
    if n == 0:
        break
    grade = list(map(int, input().split()))
    suspect = max(n for n in grade if n != max(grade))
    print(grade.index(suspect) + 1)
