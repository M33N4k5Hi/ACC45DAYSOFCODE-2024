#include <bits/stdc++.h>
using namespace std;

int minBags(int N, int K, int M) {
    int capacity = K * M;
    
    int bags = (N + capacity - 1) / capacity;
    return bags;
}

int main() {
    int T; 
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int N, K, M;
        cin >> N >> K >> M;
        
        cout << minBags(N, K, M) << endl;
    }
    
    return 0;
}
