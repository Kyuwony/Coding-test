coin, price = map(int, input().split())

if coin * 100 >= price:
    print("Yes")
else:
    print("No")