max_val = -1
max_i = 0
max_j = 0

for i in range(9):
    row = list(map(int, input().split()))
    if max(row) > max_val:
        max_val = max(row)
        max_i = i + 1
        max_j = row.index(max_val) + 1

print(max_val)
print(max_i, max_j)
