#include<bits/stdc++.h>
using namespace std;

int bestNumCoins[1000000];

int DPChange(int M, int c[], int d) {
    bestNumCoins[0] = 0;
    for (int m = 1; m <= M; m++) {
        bestNumCoins[m] = INT_MAX;
        for (int i = 0; i < d; i++) {
            if (m >= c[i]) {
                if (bestNumCoins[m - c[i]] + 1 < bestNumCoins[m]) {
                    bestNumCoins[m] = bestNumCoins[m - c[i]] + 1;
                }
            }
        }
    }
    return bestNumCoins[M];
}

int main() {
    int M, d;
    cin >> M >> d;
    int c[d];
    for (int i = 0; i < d; i++) {
        cin >> c[i];
    }

    int ans = DPChange(M, c, d);

    cout << ans << endl;
}
