#include <iostream>
#include <vector>

using namespace std;

void check_all_equal(vector<vector<int>>& rectangle, int& zero, int& one) {
    int length = rectangle.size();
    if (length == 1) {
        if (rectangle[0][0] == 0) {
            zero++;
        }
        else {
            one++;
        }
        return;
    }
    // 같은 경우가 있는 경우에만 반환
    bool is_all_equal = true;
    int value = rectangle[0][0];
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (rectangle[i][j] != value) {
                is_all_equal = false;
                break;
            }
        }
        if (!is_all_equal) {
            break;
        }
    }
    if (is_all_equal) {
        if (value == 0) {
            zero += 1;
        }
        else {
            one += 1;
        }
        return;
    }
    // 현재 사각형 크기의 절반으로 배정
    vector<vector<int>> new_rectangles[4];
    for (int i = 0; i < 4; i++) {
        new_rectangles[i].resize(length / 2);
        for (int j = 0; j < length / 2; j++) {
            new_rectangles[i][j].resize(length / 2);
        }
    }
    // 4분할 사각형 배정
    for (int i = 0; i < length / 2; i++) {
        for (int j = 0; j < length / 2; j++) {
            new_rectangles[0][i][j] = rectangle[i][j];
            new_rectangles[1][i][j] = rectangle[i][static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + length / 2];
            new_rectangles[2][i][j] = rectangle[static_cast<std::vector<int, std::allocator<int>>::size_type>(i) + length / 2][j];
            new_rectangles[3][i][j] = rectangle[static_cast<std::vector<int, std::allocator<int>>::size_type>(i) + length / 2][static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + length / 2];
        }
    }
    // 각 사각형에 대해서 재귀함수 실행
    for (int i = 0; i < 4; i++) {
        check_all_equal(new_rectangles[i], zero, one);
    }
}

int main() {
    int T;
    cin >> T;
    int zero = 0, one = 0;
    vector<vector<int>> rectangle(T, vector<int>(T));
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            cin >> rectangle[i][j];
        }
    }
    check_all_equal(rectangle, zero, one);
    cout << zero << endl;
    cout << one << endl;
    return 0;
}
