N, K = map(int, input().split())
N_list = []

for i in range(1, (N//2)+1):
    if N % i == 0:
        N_list.append(i)
        N_list.append(N//i)
N_list.sort()
N_list = set(N_list)
N_list = list(N_list)
if len(N_list) >= K:
    print(N_list[K-1])
else:
    print("0")