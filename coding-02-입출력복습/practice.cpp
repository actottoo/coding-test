#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x>> y;
    cout << x << "/" << y << "=" << x/y << "..." << x%y << '\n';
    cout << "x = 0x" << hex << setfill('0') << setw(4) << x << '\n';
    cout << "y=" << y << '\n';
    cout << dec << "y = " << y <<'\n';
    return 0;
    

}