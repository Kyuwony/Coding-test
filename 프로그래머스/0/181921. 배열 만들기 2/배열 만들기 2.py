def solution(l, r):
    answer = []
    i = 0
    
    while(True):       
        num = int(bin(i)[2:]) * 5
        
        if l <= num and num <= r:
            answer.append(num)
        elif num > r: break
        
        i += 1
    
    return [-1] if len(answer) == 0 else answer