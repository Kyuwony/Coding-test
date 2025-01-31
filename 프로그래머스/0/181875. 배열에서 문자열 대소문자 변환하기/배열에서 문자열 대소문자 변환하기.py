def solution(strArr):
    for i in range(0, len(strArr)):
        strArr[i] = strArr[i].lower() if i % 2 == 0 else strArr[i].upper()
    return strArr