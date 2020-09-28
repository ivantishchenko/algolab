#include <iostream>
#include <vector>

using namespace std;

void testcase() {
    int n;
    cin >> n;
    vector<vector<int>> matr;
    for(int i = 0; i < n; i++) {
        vector<int> row;
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        matr.push_back(row);
    }
    int res = 0;
    for(int i1 = 0; i1 < n; i1++) {
        for(int j1 = 0; j1 < n; j1++) {
            for(int i2 = i1; i2 < n; i2++) {
                for(int j2 = j1; j2 < n; j2++) {
                    // calculate the sum
                    int sum = 0;
                    for(int k = i1; k <= i2; k++) {
                        for(int l = j1; l <= j2; l++) {
                            sum += matr[k][l];
                        }
                    } 
                    if (sum % 2 == 0) {
                        res++;
                    }
                } 
            }          
        } 
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        testcase();
    }
}
