#include <iostream>
#include <vector>

using namespace std;

void testcase() {
    int n;
    cin >> n;
    vector<int> heights;
    for(int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        heights.push_back(h); 
    }
    int range = 1;
    for(int i = 0; i < n; ++i) {
        if(i == range) {
            cout << range << endl;
            return;
        }
        range = max(range, heights[i] + i);
    }
    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        testcase();
    } 
}
