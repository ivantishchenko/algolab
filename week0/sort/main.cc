#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void testcase() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool sort_greater;
    cin >> sort_greater;
    if(sort_greater) {
        sort(arr.begin(), arr.end(), greater<int>());
    } else {
        sort(arr.begin(), arr.end());
    }
    for(int num: arr) cout << num << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testcase();
    }
}

