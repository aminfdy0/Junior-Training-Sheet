#include <iostream>
using namespace std;
int main(void)
{
    int shoe[4];
    for (int i = 0; i < 4; i++) {
        cin >> shoe[i];
    }
    int changes =  0;
    for (int i = 0; i < 4; i++) {
        bool isnew = true;
        for (int j = 0; j < i; j++) {
            if (shoe[i] == shoe[j]) {
                isnew = false;
                break;
            }
        }
        if (isnew) changes++;
    }
    cout << 4 - changes;
}