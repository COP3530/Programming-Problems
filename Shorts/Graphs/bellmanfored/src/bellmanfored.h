#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> bellman_ford(vector<vector<pair<int, int>>>& adjList, int source) {
    vector<int> dists(adjList.size(), INT_MAX);
    dists[source] = 0;

    for (int i = 0; i < adjList.size() - 1; i++) {
        for (int from = 0; from < adjList.size(); from++) {
            if (dists[from] == INT_MAX) continue;

            for (auto p : adjList[from]) {
                // Your code here :)
            }
        }
    }

    // Your code here :)

    return dists;
}