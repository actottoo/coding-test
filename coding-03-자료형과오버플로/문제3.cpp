// 문제 3. 레지스터 값 세 가지로 보기
// 예시 입력: 255  |  -4  |  -2147483648
// 예시 출력: 255 / 0x000000FF / 255 (각각 한 줄)  |  -4 / 0xFFFFFFFC / 4294967292  |  -2147483648 / 0x80000000 / 2147483648
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x << '\n' << "0x" << hex << setw(8) << setfill('0') << x << dec << '\n' <<  (unsigned int)x << '\n';

    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나):
