N, M = map(int, input().split())
bucket = [i+1 for i in range(N)]

for _ in range(M):
    S, E = map(int, input().split())
    bucket[S-1:E] = bucket[S-1:E][::-1]

print(*bucket)
