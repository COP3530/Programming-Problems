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
                int to = p.first, weight = p.second;
                // relax the from, to edge
                if (dists[from] + weight < dists[to]) {
                    dists[to] = dists[from] + weight;
                }
            }
        }
    }

    for (int from = 0; from < adjList.size(); from++) {
        // we won't be able to relax any edges from this vertex
        if (dists[from] == INT_MAX) continue;

        for (auto p : adjList[from]) {
            int to = p.first, weight = p.second;
            // relax the from, to edge
            if (dists[from] + weight < dists[to]) {
                return vector<int>();
            }
        }
    }

    return dists;
}