N, M = map(int, input().split())
matrix = [[0]*M for _ in range(N)]
for k in range(2):
    for i in range(N):
        for j, temp in enumerate(map(int, input().split())):
            matrix[i][j] += temp
for row in matrix:
    print(*row)