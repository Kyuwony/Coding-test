def solution(arr, queries):
    
    answer = []
    
    for s, e, k in queries:
        numList = []
        
        for i in range(s, e + 1):
            if arr[i] > k:
                numList.append(arr[i])

        if len(numList) != 0:
            answer.append(min(numList))
        else: 
            answer.append(-1)
    return answer