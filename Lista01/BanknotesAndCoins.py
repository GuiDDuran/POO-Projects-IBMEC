from math import floor

notes = float(input())

print("NOTAS:")
print(f"{floor(notes / 100)} nota(s) de R$ 100.00")
rest = notes % 100
print(f"{floor(rest / 50)} nota(s) de R$ 50.00")
rest = rest % 50
print(f"{floor(rest / 20)} nota(s) de R$ 20.00")
rest = rest % 20
print(f"{floor(rest / 10)} nota(s) de R$ 10.00")
rest = rest % 10
print(f"{floor(rest / 5)} nota(s) de R$ 5.00")
rest = rest % 5
print(f"{floor(rest / 2)} nota(s) de R$ 2.00")
rest = rest % 2

print("MOEDAS:")
print(f"{floor(rest / 1)} moeda(s) de R$ 1.00")
rest = rest % 1
print(f"{floor(rest / 0.5)} moeda(s) de R$ 0.50")
rest = rest % 0.5
print(f"{floor(rest / 0.25)} moeda(s) de R$ 0.25")
rest = rest % 0.25
print(f"{floor(rest / 0.10)} moeda(s) de R$ 0.10")
rest = rest % 0.10
print(f"{floor(rest / 0.05)} moeda(s) de R$ 0.05")
rest = rest % 0.05
print(f"{round(rest / 0.01)} moeda(s) de R$ 0.01")