#include <iostream>
using namespace std;

// function for reducing
int ffr(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int Y, W;
    cin >> Y >> W;

    int M = max(Y, W);
    int chance = 6 - M + 1;
    int total = 6;

    int g = ffr(chance, total);
    chance /= g;
    total /= g;

    cout << chance << "/" << total;
    return 0;
}
