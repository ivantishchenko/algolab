#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void testcase() {
    string a; cin >> a;
    string b; cin >> b;

    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    swap(a[0], b[0]);
    cout << a << " " << b << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        testcase();
    }
}
