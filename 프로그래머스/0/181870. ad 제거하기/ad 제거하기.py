def solution(strArr):
    idx = 0
    while len(strArr) > idx:
        if "ad" in strArr[idx]:
            del strArr[idx]
            idx -= 1
        idx += 1
    return strArr