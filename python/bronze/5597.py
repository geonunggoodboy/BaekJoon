N_list = [0] * 30
for _ in range(28):
    temp = int(input())
    N_list[temp-1] = 1
for i, value in enumerate(N_list):
    if not value:
        print(i+1)