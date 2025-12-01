#include <iostream>
using namespace std;
int main(void)
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 9; i++) {
        int mult = k * i;
        int last = mult % 10;   // this for take the last digit from number

        if (last == r || last == 0) {
            cout << i;
            return 0;
        }
    }
}