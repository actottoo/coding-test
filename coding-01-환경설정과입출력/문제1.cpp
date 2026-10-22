// 문제 1. 인사 카드
// 예시 입력: cj 25  |  Ann 0
// 예시 출력: Hello, cj! / Next year you will be 26.  |  Hello, Ann! / Next year you will be 1.
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:
#include <string>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name;
    int a;
    cin >> name >> a;
    cout << "Hello, " << name <<  "!" << '\n';
    cout <<"Next year you will be " << a + 1 << "." << '\n';\
    


    
    // 여기에 작성
    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나):
