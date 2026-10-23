def total_digit(n):
    if n == 0:
        return 0
    return (n % 10) + total_digit(n // 10)


n = int(input())
total = total_digit(n)
print(f"Jumlah digit dari {n} adalah {total}")
