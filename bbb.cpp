def count_vampire_squares(t, test_cases):
    results = []
    for case_idx in range(t):
        n, m, grid = test_cases[case_idx]
        dp = [[0] * m for _ in range(n)]
        total_squares = 0
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    if i == 0 or j == 0:
                        dp[i][j] = 1
                    else:
                        dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])
                    total_squares += dp[i][j]
        results.append(f"Case {case_idx + 1}: {total_squares}")
    return results
t = int(input())
test_cases = []
for _ in range(t):
    n, m = map(int, input().split())
    grid = [list(map(int, input().split())) for _ in range(n)]
    test_cases.append((n, m, grid))
results = count_vampire_squares(t, test_cases)
for res in results:
    print(res)