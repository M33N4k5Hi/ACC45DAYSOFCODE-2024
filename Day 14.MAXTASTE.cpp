#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max_tastiness = max(a, b) + max(c, d);

        cout << max_tastiness << endl;
    }

    return 0;
}
