spent_time = int(input())
average_speed = int(input())
spent_per_km = 12
liters = (spent_time * average_speed) / spent_per_km
print(f"{liters:.3f}")