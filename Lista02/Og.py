while True:
    childrens = input().split()
    childrens_int = [int(c) for c in childrens]
    l, r = childrens_int
    if (l == 0 and r == 0):
        break
    else:
        print(l + r)

     