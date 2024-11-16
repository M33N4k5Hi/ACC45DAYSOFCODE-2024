#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int free_gifts = N / 5;
        int paid_gifts = N - free_gifts;
        int total_cost = paid_gifts;

        cout << total_cost << endl;
    }

    return 0;
}
