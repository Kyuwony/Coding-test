def solution(myString, pat):
    changedString = ""
    for i in myString:
        changedString += "A" if i == "B" else "B"
        
    return 1 if pat in changedString else 0