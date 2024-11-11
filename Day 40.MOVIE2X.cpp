#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int timeForFirstY = Y / 2;
    int timeForRemaining = X - Y;
    int totalTime = timeForFirstY + timeForRemaining;
    
    cout << totalTime << endl;
    
    return 0;
}
