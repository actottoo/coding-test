// 문제 2. 정수 계산기
// 예시 입력: 7 3  |  -7 2
// 예시 출력: 10 4 21 2 1 (각각 한 줄)  |  -5 -9 -14 -3 -1 (각각 한 줄)
// 걸린 시간:
// 힌트 사용: 안 봄 / 힌트1 / 힌트2
// AI 사용: 안 씀 / 풀고 나서 리뷰만 / 풀이 중에 씀
// 막힌 점:

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;

    cin >> a >> b;
    cout << a+b << '\n' << a-b << '\n' << a*b << '\n' << a/b << '\n' << a%b << '\n'; // 여기에 작성
    return 0;
}

// AI 메모 (AI가 틀렸거나 애매했던 점 / 어떻게 확인했나): 이게 마지막 a%b 를 하면 -7 2
-5
-9
-14
-3
-1lsshu@cjlabtop:~/coding-test/coding-01-환경설정과입출력$ 이런 식으로 맨 마지막 부분이 짤려서 잘 확인이 되지 않음 \n을 넣어도 그럼