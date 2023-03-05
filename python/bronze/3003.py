chess = [1, 1, 2, 2, 2, 8]
temp = list(map(int, input().split()))
result = [str(c - t) for c, t in zip(chess, temp)]
print(" ".join(result))