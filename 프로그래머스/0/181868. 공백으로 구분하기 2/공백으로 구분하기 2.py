def solution(my_string):
    answer = my_string.strip().split()
    while "" in answer:
        answer.remove("")
    return answer