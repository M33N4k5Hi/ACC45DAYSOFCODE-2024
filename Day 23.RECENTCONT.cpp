#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        int start38Count = 0; 
        int ltime108Count = 0; 

        for (int i = 0; i < N; i++) {
            string contestCode;
            cin >> contestCode;
            
            if (contestCode == "START38") {
                start38Count++;
            } else if (contestCode == "LTIME108") {
                ltime108Count++;
            }
        }
        cout << start38Count << " " << ltime108Count << endl;
    }

    return 0;
}
