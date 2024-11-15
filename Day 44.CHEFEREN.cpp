#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, A, B; 
        cin >> N >> A >> B;

        int totalDuration = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                totalDuration += A; 
            } else {
                totalDuration += B; 
            }
        }
        cout << totalDuration << endl;
    }

    return 0;
}
