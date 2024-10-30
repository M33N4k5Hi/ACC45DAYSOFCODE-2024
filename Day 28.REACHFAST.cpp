#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;
        
        int distance = abs(B - A);
        int minSteps = (distance + K - 1) / K; 
        cout << minSteps << endl;
    }
    
    return 0;
}
