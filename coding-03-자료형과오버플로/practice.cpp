#include <iostream>
#include <climits>
#include <bitset>
using namespace std;

int main() {
    int a = INT_MAX;
    cout << "a = " << a << '\n';
    cout << "bits = " << bitset<32>(a) << '\n';
    a= a + 1;
    cout << "a+1 = " << a << '\n';
    cout << "bits = " << bitset<32>(a) << '\n';


    int x = 100000, y = 100000;
    long long p1 = x * y;
    long long p2 = 1LL * x * y;
    cout << "x*y = " << p1 << '\n';
    cout << "1LL* = " << p2 << '\n';

    unsigned int t = 3;
    t = t - 5;
    cout << "3u-5 = " << t << '\n';
    return 0;
}