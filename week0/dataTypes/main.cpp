#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void testcase() {
    int val_int; cin >> val_int; cout << val_int << " ";
    long val_long; cin >> val_long; cout << val_long << " ";
    string val_string; cin >> val_string; cout << val_string << " ";
    double double_val; cin >> double_val; cout << fixed << double_val << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cout << setprecision(2);
    int t; cin >> t;
    for(int i = 0; i < t; ++i)
        testcase();
}
