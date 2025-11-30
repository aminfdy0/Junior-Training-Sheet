#include <iostream>
using namespace std;
int main(void)
{
    int teams;
    cin >> teams;
    int games[teams][2];

    for (int i = 0; i < teams; i++) {
        cin >> games[i][0] >> games[i][1];
    }

    int changes = 0;
    for (int i = 0; i < teams; i++) {
        for (int j = 0; j < teams; j++) {
            if (games[i][0] == games[j][1]) {
                changes++;
            }
        }
    }
    cout << changes;
    return 0;
}