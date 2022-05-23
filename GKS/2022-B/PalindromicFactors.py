import sys
import math

rounds = int(input())

for i in range(1, rounds+1):
	factors = []
	res = 0

	A = int(input())

	# get factors
	# use a more efficient but still kinda brute force method
	# O(sqrt(n))

	iter = 1
	while iter**2 <= A:
		if A % iter == 0:
			factors.append(iter)

			if A//iter != iter:
				factors.append(A//iter)
		iter += 1

	# palin?
	for k in factors:
		k = str(k)
		if k == k[::-1]:
			res += 1


	print("Case #{}: {}".format(i, res))