def solution(str1, str2):
    answer = ''
    for i in range(0, len(str1) + len(str2)):
        answer += str1[i//2] if i%2 == 0 else str2[i//2]
    return answer