N, M = map(int, input().split())
buckets = list(range(1, N+1))
for _ in range(M):
    s, e, k = map(int, input().split())
    temp = buckets[k-1:e]
    buckets[k:e] = buckets[s-1:k-1]
    buckets[s-1:k] = temp
print(*buckets)

