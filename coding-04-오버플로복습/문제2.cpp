// 문제 2. 8비트 시퀀스 번호
// 예시 입력: 10 13  |  250 4  |  0 255
// 예시 출력: 3  |  10  |  255
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:

#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    int p = 0;
    int q = 0;
    cin >> p >> q;
    cout << static_cast<int>(static_cast<uint8_t>(q - p)) << '\n';
    // 여기에 작성
    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나):
