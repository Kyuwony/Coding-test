def solution(n):
    answer = [[0] * n for i in range(0, n)]
    direction = "r"
    x = y = 0
    rc = lc = uc = dc = 0
    for i in range(1, n**2 + 1):
        answer[y][x] = i
        
        if direction == "r":
            x += 1
        elif direction == "l":
            x -= 1
        elif direction == "d":
            y += 1
        elif direction == "u":
            y -= 1
        
        if x >= n - rc:
            x = n-1 - rc
            direction = "d"
            uc += 1
            y += 1
        elif x < 0 + lc:
            x = 0 + lc
            direction = "u"
            dc += 1
            y -= 1
        elif y >= n - lc:
            y = n-1 - lc
            direction = "l"
            rc += 1
            x -= 1
        elif y < 0 + uc:
            y = 0 + uc
            direction = "r"
            lc += 1
            x += 1
              
    return answer