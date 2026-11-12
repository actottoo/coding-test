#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint8_t seq = 254;
    cout << "seq  =" << static_cast<int>(seq) << '\n';
    seq = seq + 1;
    cout << "+1  =" << static_cast<int>(seq) << '\n';
    seq = seq + 1;
    cout << "+1  =" << static_cast<int>(seq) << '\n';

    uint8_t p = 5, q = 10;
    cout << "p-q = " << p-q << '\n';
    cout << "8bit = " << static_cast<int>(static_cast<uint8_t>(p-q)) << '\n';
    cout << "bytes = " << sizeof(uint8_t) << ' ' << sizeof(uint16_t) << ' ' <<sizeof(uint32_t) << ' ' <<sizeof(int64_t) << '\n';
    return 0;
}