def step(n):
    if n == 0:
        return 0
    return 2 * step(n - 1) + 1


n = int(input())
print(f"Jumlah langkah minimum untuk {n} cakram adalah {step(n)}")
