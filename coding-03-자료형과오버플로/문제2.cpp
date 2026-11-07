// 문제 2. 타이머 경과 시간
// 예시 입력: 100 350  |  4294967290 5  |  0 4294967295
// 예시 출력: 250  |  11  |  4294967295
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:

#include <iostream>
using namespace std;

int main() {
    unsigned int s,e;

    cin >> s >> e;
    
    int a = e - s;
    unsigned int b = a;

    cout <<  b  << '\n';
    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나):
