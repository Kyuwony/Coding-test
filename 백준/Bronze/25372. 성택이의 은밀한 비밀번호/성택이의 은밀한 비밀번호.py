n = int(input())
pw = []

for i in range(0, n):
    pw.append(input())

for i in range(0, n):
    if len(pw[i]) < 10 and len(pw[i]) > 5:
        print("yes")
    else:
        print("no")