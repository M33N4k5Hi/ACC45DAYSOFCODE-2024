#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        int target = 21 - A - B;
        if (target >= 1 && target <= 10) {
            cout << target << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}