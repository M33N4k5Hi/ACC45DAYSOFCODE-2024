#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> minions(N);
        for (int i = 0; i < N; ++i) {
            cin >> minions[i]; 
        }

        int count = 0;
        for (int i = 0; i < N; ++i) {
            if ((minions[i] + K) % 7 == 0) {
                ++count; 
            }
        }

        cout << count << endl; 
    }
    
    return 0;
}
