#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter number of topics: ";
    cin >> n;

    vector<int> learnPoints(n);

    cout << "Enter Learning Points: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> learnPoints[i];
    }

    vector<int> dp(n);

    dp[0] = learnPoints[0];

    if (n > 1) {
        dp[1] = max(learnPoints[0], learnPoints[1]);
    }

    for (int i = 2; i < n; i++) {

        int take = learnPoints[i] + dp[i - 2];
        int skip = dp[i - 1];

        dp[i] = max(take, skip);
    }

    cout << "Max points: " << dp[n - 1];

    return 0;
}