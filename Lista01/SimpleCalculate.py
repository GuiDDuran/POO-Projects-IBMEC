product01 = input().split()
product01_float = [float(p) for p in product01]
p1_code, p1_num_units, p1_price = product01_float

product02 = input().split()
product02_float = [float(p) for p in product02]
p2_code, p2_num_units, p2_price = product02_float

total_value = (p1_num_units * p1_price) + (p2_num_units * p2_price)

print(f"VALOR A PAGAR: R$ {total_value:.2f}")