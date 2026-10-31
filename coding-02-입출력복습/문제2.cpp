// 문제 2. 메모리 주소 덤프
// 예시 입력: 4096  |  7  |  2000000000
// 예시 출력: 0x00001000 / 0x00001004 / 1024 (각각 한 줄)  |  0x00000007 / 0x0000000B / 1  |  0x77359400 / 0x77359404 / 500000000
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    cout << hex << setfill('0') << setw(8) << uppercase << A << '\n';
    cout << hex << setfill('0') << setw(8) << uppercase << A + 4 << '\n';
    cout << dec << A/4 << '\n';
    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나):
