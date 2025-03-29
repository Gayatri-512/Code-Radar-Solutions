#include <stdio.h>

void findRank(int leaderboard[], int n, int playerScores[], int m) {
    int rank = 1;
    
    // Remove duplicate ranks from the leaderboard
    int uniqueRanks[n], uniqueCount = 0;
    uniqueRanks[uniqueCount++] = leaderboard[0];

    for (int i = 1; i < n; i++) {
        if (leaderboard[i] != leaderboard[i - 1]) {
            uniqueRanks[uniqueCount++] = leaderboard[i];
        }
    }

    // Traverse player's scores and determine ranks
    int j = uniqueCount - 1; // Start from the lowest rank
    for (int i = 0; i < m; i++) {
        while (j >= 0 && playerScores[i] >= uniqueRanks[j]) {
            j--; // Move up the leaderboard
        }
        printf("Rank after score %d: %d\n", playerScores[i], j + 2);
    }
}

int main() {
    int leaderboard[] = {100, 90, 90, 80, 75, 60}; // Sorted Descending
    int playerScores[] = {50, 65, 77, 90, 102};   // Sorted Ascending

    int n = sizeof(leaderboard) / sizeof(leaderboard[0]);
    int m = sizeof(playerScores) / sizeof(playerScores[0]);

    findRank(leaderboard, n, playerScores, m);
    
    return 0;
}
