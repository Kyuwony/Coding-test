hour, minute, second = map(int, input().split())
time = int(input())

total = hour * 3600 + minute * 60 + second + time

hour = total // 3600 % 24
minute = total % 3600 // 60
second = total % 60

print(f"{hour} {minute} {second}")