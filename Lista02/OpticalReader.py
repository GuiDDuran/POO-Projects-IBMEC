while True:
    num_questions = int(input())
    if num_questions == 0:
        break
    for question in range (num_questions):
        a, b, c, d, e = map(int, input().split())
        count = 0
        if a <= 127:
            count += 1
            result = "A"
       
        if b <= 127:
            count += 1
            result = "B"

        if c <= 127:
            count += 1
            result = "C"

        if d <= 127:
            count += 1
            result = "D"

        if e <= 127:
            count += 1
            result = "E"

        if count == 1:
            print(result)
            
        else:
            print("*")