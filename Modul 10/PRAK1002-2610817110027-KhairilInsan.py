def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(i - 1) + fibonacci(i - 2)


n = int(input())
for i in range(n):
    print(fibonacci(i), end=" ")
print()
