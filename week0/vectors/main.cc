#include <iostream>
#include <vector>

using namespace std;

void testcase() {
    int n; cin >> n;
    vector<int> vi;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        vi.push_back(num);
    }
    int del_idx; cin >> del_idx;
    vi.erase(vi.begin() + del_idx);
    int beg_idx; cin >> beg_idx;
    int end_idx; cin >> end_idx;
    vi.erase(vi.begin() + beg_idx, vi.begin() + end_idx + 1);
    
    for(auto num: vi) cout << num << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int i = 0; i < t; ++i)
        testcase();
}

