n = int(input())
for cases in range (n):
    x, y = map(int, input().split())
    r_func = (3*x)**2 + y**2
    b_func = 2*(x**2) + (5*y)**2
    c_func = -100*x + y**3
    if r_func > b_func and r_func > c_func:
        print("Rafael ganhou")
    if b_func > r_func and b_func > c_func:
        print("Beto ganhou")
    if c_func > b_func and c_func > r_func:
        print("Carlos ganhou")