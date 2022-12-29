with open("main.txt", "r", encoding="UTF-8") as file:
    input = file.read()
    e = []

    chars = ['a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a']
    chars[0] = input[0]
    chars[1] = input[1]
    chars[2] = input[2]
    chars[3] = input[3]
    chars[4] = input[4]
    chars[5] = input[5]
    chars[6] = input[6]
    chars[7] = input[7]
    chars[8] = input[8]
    chars[9] = input[9]
    chars[10] = input[10]
    chars[11] = input[11]
    chars[12] = input[12]
    chars[13] = input[13]

    for c in range(len(input)):
        chars.pop(0)
        chars.append(input[c])

        if len(set(chars)) == len(chars):
            e.append(c)


print("PART 2:", e[0]+1)
