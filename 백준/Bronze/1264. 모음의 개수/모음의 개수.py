while True:
    count = 0
    line = input().split()
    line = "".join(line)

    if line == "#":
        break

    for letter in line:
        if letter.lower() in ('a', 'e', 'i', 'o', 'u'):
            count += 1
    print(count)