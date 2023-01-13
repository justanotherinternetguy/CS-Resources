ZZ = input()
N, P = ZZ.split(" ")

n = str(N)
P = int(P)

ind_P = len(n) - P
Pth = int(str(n)[len(n) - P])

res = ""
for i in range(len(n)):
    curr = ""
    if (i < ind_P):
        curr = str(int(n[i]) + Pth)
    elif (i == ind_P):
        curr = str(Pth)
    else:
        curr = str(abs(int(n[i]) - Pth))

    res += curr[-1]

print(res)
