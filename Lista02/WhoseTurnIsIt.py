cases = int(input())
for i in range (cases):
    name_1, choice_1, name_2, choice_2 = input().split()
    num_1, num_2 = map(int, input().split())
    if choice_1 == "PAR" and choice_2 == "IMPAR":
        if ((num_1 + num_2) % 2 == 0):
            print(name_1)
        if ((num_1 + num_2) % 2 != 0):
            print(name_2)
    if choice_1 == "IMPAR" and choice_2 == "PAR":
        if ((num_1 + num_2) % 2 != 0):
            print(name_1)
        if ((num_1 + num_2) % 2 == 0):
            print(name_2)
        
