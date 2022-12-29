out = sorted(
    (sum(map(int, f.splitlines()))
    for f in open("main.txt").read().split("\n\n")),
    reverse = True
)
print("PART 1: ", out[0])
print("PART 2: ", sum(out[0:3]))
