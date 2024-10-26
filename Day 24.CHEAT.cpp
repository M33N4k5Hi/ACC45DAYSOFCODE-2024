#include <bits/stdc++.h>
using namespace std;

int countTuesdays(int days) {
    int fullWeeks = days / 7;
    int remainingDays = days % 7;
    
    int tuesdayCount = fullWeeks;
    if (remainingDays >= 2) {
        tuesdayCount += 1;
    }

    return tuesdayCount;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << countTuesdays(N) << endl;
    }

    return 0;
}
