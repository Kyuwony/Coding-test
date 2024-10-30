def solution(babbling):
    
    for i in range(0, len(babbling)):
        if "aya" in babbling[i]:
            babbling[i] = babbling[i].replace("aya", "-")
        if "ye" in babbling[i]:
            babbling[i] = babbling[i].replace("ye", "-")
        if "woo" in babbling[i]:
            babbling[i] = babbling[i].replace("woo", "-")
        if "ma" in babbling[i]:
            babbling[i] = babbling[i].replace("ma", "-")
        while(babbling[i].count("-")):
            babbling[i] = babbling[i].replace("-", "")
            
    return babbling.count("")