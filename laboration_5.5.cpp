#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

double generateNextRandom(const unsigned int a, unsigned int b,
    unsigned int c, unsigned int m) {
    unsigned int V1 = rand() % m;  
    unsigned int V2 = rand() % m;
    unsigned int nextRandom = (a * V1 + b * V2 + c) % m;
    return static_cast<double>(nextRandom) / m;
}

int main() {
    unsigned int a = 166481715;
    unsigned int b = 101391313;
    unsigned int c = 166521612;
    unsigned int m = 42949679999;


    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < 10; ++i) {
        cout << generateNextRandom(a, b, c, m) << endl;
    }

    return 0;
}
