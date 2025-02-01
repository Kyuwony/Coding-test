def solution(num_list):
    if len(num_list) > 10:
        return sum(num_list)
    else:
        for i in range(1, len(num_list)):
            num_list[0] *= num_list[i]
        return num_list[0]