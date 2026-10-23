n, k = input().split()
n = int(n)
multiples = int(k)

total = 0
for i in range(1, n + 1):
    multi = ""
    equal = 0
    for j in range(i, 0, -1):
        multi = multi + f"({j} * {k})"
        if j > 1:
            multi = multi + " + "
        equal = equal + j * multiples
    print(f"{multi} = {equal}")
    total = total + equal
print(f"{total}")
