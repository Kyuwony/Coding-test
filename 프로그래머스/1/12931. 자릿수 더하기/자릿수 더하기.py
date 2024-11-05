def solution(n):
    answer = 0
    count = 1
    length = len(str(n))
    
    while length > 0:
        length -= 1
        answer += n // (10 ** length)
        n = n % (10 ** length)
        
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')

    return answer