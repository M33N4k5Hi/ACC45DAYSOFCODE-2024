#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    
    int maxLead = 0; 
    int winner = 0;  
    int cumulativeScore1 = 0; 
    int cumulativeScore2 = 0; 
    
    for (int i = 0; i < n; i++) {
        int score1, score2;
        cin >> score1 >> score2;
    
        cumulativeScore1 += score1;
        cumulativeScore2 += score2;
        
        int lead = abs(cumulativeScore1 - cumulativeScore2);
        int currentLeader = (cumulativeScore1 > cumulativeScore2) ? 1 : 2;
        if (lead > maxLead) {
            maxLead = lead;
            winner = currentLeader;
        }
    }
   
    cout << winner << " " << maxLead << endl;
    
    return 0;
}
