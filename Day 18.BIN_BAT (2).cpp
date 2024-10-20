#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, A, B; 
        cin >> N >> A >> B;

        int totalRounds = 0; 

        for (int teams = N; teams > 1; teams /= 2) {
            totalRounds++;
        }

        int totalTime = A * totalRounds + B * (totalRounds - 1);
        cout << totalTime << endl;
    }

    return 0;
}

