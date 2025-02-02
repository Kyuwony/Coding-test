import sys

n = int(sys.stdin.readline())
name = []

for _ in range(0, n):
    name.append(sys.stdin.readline().rstrip())

for i in range(0, n):
    print(name[i].lower())