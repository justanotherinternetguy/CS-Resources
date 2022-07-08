def isPrime(n):
    res = True
    for i in range(2, n):
        if (n % i) == 0:
            res = False
            break
    return res


s = 2
for i in range(3, 2000000):
    if isPrime(i):
        print(f'adding = {i}')
        s += i
print(s)
