
for _ in range(int(input())):
    A, B = map(int, input().split())
    
    val1 = A * 10 
    val2 = B * 5  
    
    if val1 > val2:
        print("FIRST")
    elif val1 < val2:
        print("SECOND")
    else:
        print("ANY")
