#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int H, X, Y;
        cin >> H >> X >> Y;  
        
        if (H <= Y) {
            cout << 1 << endl;
        }
        else {
            int remainingHealth = H - Y;
            int attacksNeeded = ceil((double)remainingHealth / X);
            
            cout << 1 + attacksNeeded << endl;
        }
    }
    
    return 0;
}
