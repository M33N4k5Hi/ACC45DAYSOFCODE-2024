#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, X, P;
        cin >> N >> X >> P;
        int score = (X * 3) - ((N - X) * 1);
        if (score >= P) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}
