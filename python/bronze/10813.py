# 처음에는 2개 받음
N, M = map(int, input().split())
# 리스트 제작
N_list = [i+1 for i in range(N)]
for _ in range(M):
    temp1, temp2 = map(int, input().split())
    a, b = temp1-1, temp2-1
    N_list[a], N_list[b] = N_list[b], N_list[a]
for i in range(N):
    print(N_list[i], end = " ")