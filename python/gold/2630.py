import sys

#테스트 횟수
T = int(sys.stdin.readline())

zero, one = 0, 0

#이중 배열 형식으로 받기
rectangle = [[0 for _ in range(T)] for _ in range(T)]
for raw in range(T):
    rectangle[raw][:] = map(int, sys.stdin.readline().split())
    
#요소가 전부 같은지 확인하는 함수
def check_all_equal(rectangle):
    global zero, one
    if(all(x == rectangle[0][0] for row in rectangle for x in row)):
        if(rectangle[0][0] == 0):
            zero += 1
        else:
            one += 1
    else:
        length = len(rectangle[0])
        new_rectangle1 = [row[:length//2] for row in rectangle[:length//2]]
        new_rectangle2 = [row[length//2:] for row in rectangle[:length//2]]
        new_rectangle3 = [row[:length//2] for row in rectangle[length//2:]]
        new_rectangle4 = [row[length//2:] for row in rectangle[length//2:]]
        check_all_equal(new_rectangle1)
        check_all_equal(new_rectangle2)
        check_all_equal(new_rectangle3)
        check_all_equal(new_rectangle4)

# 확인
check_all_equal(rectangle)
print(zero)
print(one)