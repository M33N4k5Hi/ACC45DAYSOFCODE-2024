def max_score(X, Y):
    A = 500
    B = 1000

    score_A_first = max(0, A - 2 * X) + max(0, B - 4 * (X + Y))

    score_B_first = max(0, B - 4 * Y) + max(0, A - 2 * (X + Y))

    return max(score_A_first, score_B_first)

T = int(input())

for _ in range(T):
    X, Y = map(int, input().split()) 
    print(max_score(X, Y))

