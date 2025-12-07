#include <iostream>
using namespace std;
int main(void)
{
    // 51 NOT 50 BECAUSE NULL TERMINATED '\0'
    char s[51], t[51];
    cin >> s >> t;
    int moves = 1;
    int i = 0;
    for (int j = 0; t[j] != '\0'; j++) {
            if (t[j] == s[i]) {
                moves++;
                i++;
            }        
    }
    cout << moves;
    return 0;
}