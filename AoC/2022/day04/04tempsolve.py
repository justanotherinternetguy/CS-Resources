with open("main.txt", "r", encoding="UTF-8") as file:
    pairs = file.read().splitlines()

    overlap = 0
    non_overlap = 0

    for p in pairs:
        [e1, e2] = p.split(",")

        [start1, end1] = [int(x) for x in e1.split("-")]
        [start2, end2] = [int(x) for x in e2.split('-')]

        if (start1 <= start2 and end2 <= end1) or (start2 <= start1 and end1 <= end2):
            overlap += 1
        if (start1 < start2 and end1 < start2) or (start2 < start1 and end2 < start1):
            non_overlap += 1


print("PART 1:", overlap)

tmp = len(pairs) - non_overlap

print("PART 2:", tmp)
