import sys
import math

rounds = int(input())

for i in range(1, rounds+1):
	R, A, B = [int(s) for s in input().split(" ")]

	res = 0
	dir = 0

	while R > 0:
		if dir % 2 == 0:
			if res != 0: # everything else right
				R = R//B
			res += (R**2)*math.pi # first

		else:
			R = R*A # left
			res += (R**2)*math.pi
		dir += 1

	print("Case #{}: {}".format(i, res))