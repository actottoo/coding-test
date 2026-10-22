#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name;
    int a, b;
    cin >> name >> a >> b;

    cout << "Hi," << name << '\n';
    cout << a << "/" << b << " = " << a / b << " ..." << a%b << '\n';
    cout << setfill('0') << setw(3) << a << '\n';
    return 0;
}