#include<iostream>
#include<vector>

using namespace std;

void dfs(const vector<vector<int>> &adj, vector<bool> &visited, int node, int &visit_count, vector<int> &enter, vector<int> &leave) {
    if (!visited[node]) { 
        visited[node] = true;
        enter[node] = visit_count++;
        for(int next_node: adj[node]) {
            dfs(adj, visited, next_node, visit_count, enter, leave);
        }
        leave[node] = visit_count++;
    }
}

void testcase() {
    int n, m, v; 
    cin >> n >> m >> v;
    vector<vector<int>> adj(n);
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    // do dfs
    vector<bool> visited(n, false);
    vector<int> enter(n, -1);
    vector<int> leave(n, -1);
    int visit_count = 0;
    dfs(adj, visited, v, visit_count, enter, leave);
    for(int num: enter) cout << num << " ";
    cout << endl;
    for(int num: leave) cout << num << " ";
    cout << endl;
}

int main() {
    int t; 
    cin >> t;
    for(int i = 0; i < t; ++i) {
        testcase();
    }
}
