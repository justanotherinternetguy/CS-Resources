tc = int(input())

for x in range(1, tc+1):
    N, X, Y = map(int, input().split())

    total = N * (N + 1) / 2
    alan = total * X / (X + Y)
    
    if alan.is_integer():
        res = "POSSIBLE"

        print(f"Case #{x}: {res}", flush = True)
        alan = int(alan)
    else:
        res = "IMPOSSIBLE"

        print(f"Case #{x}: {res}", flush = True)
        continue 

    alan_sub = []
    partial_sum = 0
    max_int = N

    while partial_sum != alan and alan - partial_sum > max_int:
        partial_sum += max_int
        alan_sub.append(str(max_int))
        max_int -= 1
    if partial_sum != alan:
        alan_sub.append(str(alan - partial_sum))

    print(len(alan_sub), flush = True)
    print(' '.join(alan_sub), flush = True)
