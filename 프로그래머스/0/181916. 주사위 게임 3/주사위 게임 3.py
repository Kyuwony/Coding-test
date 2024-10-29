def solution(a, b, c, d):
    numList = []
    
    dice = [a, b, c, d]
    for i in range(1, 7):
        numList.append(dice.count(i))
    
    if 4 in numList:
        return (numList.index(4)+1) * 1111    
    elif 3 in numList:
        return (10 * (numList.index(3)+1) + (numList.index(1)+1))**2    
    elif 2 in numList:
        if numList.count(2) == 2:
            return ((numList.index(2)+1) + (numList.index(2, numList.index(2)+1)+1)) * abs((numList.index(2)+             1) - (numList.index(2, numList.index(2)+1)+1))
        else:
            return (numList.index(1)+1) * (numList.index(1, numList.index(1)+1)+1)
    else: return numList.index(1)+1