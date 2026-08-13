#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> dist;

int main() {

    int n, m, d;

    cout << "Enter number of cities, roads and D: ";
    cin >> n >> m >> d;

    adj.resize(n + 1);
    dist.resize(n + 1, -1);

    cout << "Enter " << m << " roads:\n";

    for (int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;

    // City 1 is the starting city
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        for (int child : adj[node]) {

            if (dist[child] == -1) {

                dist[child] = dist[node] + 1;
                q.push(child);
            }
        }
    }

    int counter = 0;

    for (int i = 1; i <= n; i++) {

        if (dist[i] != -1 && dist[i] <= d) {
            counter++;
        }
    }

    cout << "Efficiently reachable cities: " << counter;

    return 0;
}