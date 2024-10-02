def check_bottles(b1, b2, b3):
    empty_count = [b1, b2, b3].count(0)
    
    if empty_count >= 2:
        return "Water filling time"
    else:
        return "Not now"

T = int(input())  

for _ in range(T):
   
    b1, b2, b3 = map(int, input().split())
    
    print(check_bottles(b1, b2, b3))
