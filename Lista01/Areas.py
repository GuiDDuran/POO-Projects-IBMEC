values = input().split()
values_float = [float(v) for v in values]
a, b, c = values_float
pi = 3.14159
rectangled_triangle_area = (a * c) / 2
circle_area = (c ** 2) * pi
trapezium_area = (a + b) * c / 2
square_area = b * b
rectangle_area = a * b
print(f"TRIANGULO: {rectangled_triangle_area:.3f}\n"
      f"CIRCULO: {circle_area:.3f}\n"
      f"TRAPEZIO: {trapezium_area:.3f}\n"
      f"QUADRADO: {square_area:.3f}\n"
      f"RETANGULO: {rectangle_area:.3f}")