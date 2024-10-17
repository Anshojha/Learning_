
#include <vector>
#include <climits>
#include <queue>
#include <unordered_map>

using namespace std;

int nearestMeetingCell(const vector<int>& arr, int src, int dest) {
    int N = arr.size();
    vector<int> distances(N, INT_MAX);
    queue<int> q;

    // BFS from source
    distances[src] = 0;
    q.push(src);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        if (arr[curr] != -1 && distances[arr[curr]] == INT_MAX) {
            distances[arr[curr]] = distances[curr] + 1;
            q.push(arr[curr]);
        }
    }

    // BFS from destination
    distances[dest] = 0;
    q.push(dest);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        if (arr[curr] != -1 && distances[arr[curr]] == INT_MAX) {
            distances[arr[curr]] = distances[curr] + 1;
            q.push(arr[curr]);
        }
    }

    // Find the nearest meeting cell
    int minDistance = INT_MAX;
    int meetingCell = -1;
    for (int i = 0; i < N; ++i) {
        if (distances[i] < minDistance) {
            minDistance = distances[i];
            meetingCell = i;
        }
    }

    return meetingCell;
}