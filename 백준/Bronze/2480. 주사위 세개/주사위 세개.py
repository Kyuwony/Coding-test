first, second, third = map(int, input().split())

if first == second == third:
    print(10000 + first*1000)
elif first != second and first != third and second != third:
    print(max((first, second, third))*100)
else:
    if first == second:
        print(1000 + first*100)
    elif first == third:
        print(1000 + first*100)
    else:
        print(1000 + second*100)