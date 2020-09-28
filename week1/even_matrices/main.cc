#include <iostream>
#include <vector>

using namespace std;

void print_matr(vector<vector<int>> &matr, int n) {
    cout << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
}

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

    vector<vector<int>> sums(n + 1, vector<int>(n + 1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            sums[i][j] = sums[i - 1][j] + sums[i][j - 1] - sums[i - 1][j - 1] + matr[i - 1][j - 1];
        }        
    }
    int res = 0;
    // print_matr(row_sums, n);
    for(int i1 = 1; i1 <= n; i1++) {
        for(int j1 = 1; j1 <= n; j1++) {
            for(int i2 = i1; i2 <= n; i2++) {
                for(int j2 = j1; j2 <= n; j2++) {
                    int sum = sums[i2][j2] - sums[i1 - 1][j2] - sums[i2][j1 - 1] + sums[i1 - 1][j1 - 1];
                    if (sum % 2 == 0) res++;
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
