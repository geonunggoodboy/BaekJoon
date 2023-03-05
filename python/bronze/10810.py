N, M = map(int, input().split())
N_list = [0 for _ in range(N)]
for _ in range(M):
    a, b, c = map(int, input().split())
    for i in range(a-1, b):
        N_list[i] = c
for i in range(len(N_list)):
    print(N_list[i], end = " ")