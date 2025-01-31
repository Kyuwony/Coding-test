def solution(code):
    mode = 0;
    ret = ""
    for idx in range(0, len(code)):
        if code[idx] == '1': 
            mode = 1 - mode
            continue
        
        ret += code[idx] if idx % 2 - mode == 0 else ''
    return ret if ret != "" else "EMPTY"