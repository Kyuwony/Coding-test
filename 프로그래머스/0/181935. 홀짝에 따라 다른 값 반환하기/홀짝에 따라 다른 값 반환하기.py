def solution(n):
    answer = 0
    for i in range(n, 0, -2):
        answer += i if n % 2 == 1 else i**2
    
    return answer