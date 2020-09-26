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
    int i = 0;
    for(int j = 1; j < n; ++j) {
        if(i + heights[i] > j && j + heights[j] > i + heights[i]) {
            i = j;
        }
    }
    cout << min(i + heights[i], n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        testcase();
    } 
}
