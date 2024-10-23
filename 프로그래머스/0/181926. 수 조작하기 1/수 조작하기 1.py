def solution(n, control):
    for i in control:
        if i == 'w':
            n += 1
        elif i == 's':
            n -= 1
        elif i == 'a':
            n -= 10
        else:
            n += 10
    return n