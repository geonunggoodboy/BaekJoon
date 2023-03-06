paper = [[0] * 100 for _ in range(100)]
x_max, y_max = -1, -1
result = 0
T = int(input())
for _ in range(T):
    x_value, y_value = map(int, input().split())
    x_max = max(x_value, x_max)
    y_max = max(y_value, y_max)
    for i in range(x_value, x_value+10):
        for j in range(y_value, y_value+10):
            paper[i][j] = 1

for i in range(x_max+10):
    result += paper[i].count(1)

print(result)
