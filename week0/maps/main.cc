#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void testcase() {
    int n; cin >> n;
    map<string, vector<int>> res;
    for(int i = 0; i < n; ++i) {
        int val; cin >> val;
        string key; cin >> key;
        if(val == 0) {
            res.erase(key);
        } else {
            res[key].push_back(val);
        }
    }
    string target_key; cin >> target_key;

    if (res.find(target_key) == res.end()) {
        cout << "Empty"; 
    } else {
        sort(res[target_key].begin(), res[target_key].end());
        for(auto num: res[target_key]) cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        testcase();
    }
}
