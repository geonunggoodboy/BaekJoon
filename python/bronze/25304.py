import sys

X = int(sys.stdin.readline())
N = int(sys.stdin.readline())
result = 0

for _ in range(N):
    temp1, temp2 = map(int, sys.stdin.readline().split())
    result += temp1 * temp2

if(result == X):
    print("Yes")
else:
    print("No")