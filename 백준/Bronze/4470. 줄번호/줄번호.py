import sys

n = int(sys.stdin.readline())
line = []

for _ in range(0, n):
    line.append(sys.stdin.readline().rstrip())

for i in range(0, n):
    print(f"{i+1}. {line[i]}")