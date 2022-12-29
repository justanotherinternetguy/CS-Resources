with open("main.txt", "r", encoding="UTF-8") as file:
    input = file.read()
    e = []

    chars = ['a', 'a', 'a', 'a']
    chars[0] = input[0]
    chars[1] = input[1]
    chars[2] = input[2]
    chars[3] = input[3]

    for c in range(len(input)):
        chars.pop(0)
        chars.append(input[c])

        if len(set(chars)) == len(chars):
            e.append(c)

print("PART 1:", e[1])
