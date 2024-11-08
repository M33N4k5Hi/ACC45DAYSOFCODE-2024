#include <bits/stdc++.h>
using namespace std;

int min_operations_to_zero_sum(const vector<int>& A, int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    if (abs(sum) % 2 != 0) {
        return -1;
    }
    return abs(sum) / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = min_operations_to_zero_sum(A, N);
        cout << result << endl;
    }
    return 0;
}
