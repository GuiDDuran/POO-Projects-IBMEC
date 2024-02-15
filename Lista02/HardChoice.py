m_a, m_b, m_c = map(int, input().split())
p_a, p_b, p_c = map(int, input().split())
result = 0
if (p_a > m_a):
    result += p_a - m_a
if (p_b > m_b):
    result += p_b - m_b
if (p_c > m_c):
    result += p_c - m_c
print(result)