def divider(f1, f2):
    while f2:
        f1, f2 = f2, f1%f2
    return f1

num_tests = int(input())
for i in range(num_tests):
    f1, f2 = map(int, input().split()) # take two numbers, split and convert the numbers
    print(divider(f1, f2)) # call the function