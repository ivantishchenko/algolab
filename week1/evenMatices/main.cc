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
    vector<vector<int>> matr(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matr[i][j];    
        }
    }
    vector<vector<int>> sums(n + 1, vector<int>(n + 1));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            sums[i][j] = sums[i - 1][j] + sums[i][j - 1] - sums[i - 1][j - 1] + matr[i - 1][j - 1];
        }
    }
    int res = 0;
    for(int i1 = 1; i1 <= n; i1++) {
        for(int i2 = i1; i2 <= n; i2++) {
            vector<int> p_sums(n + 1);
            for(int k = 1; k <= n; k++) {
               int sum = sums[i2][k] - sums[i1 - 1][k] - sums[i2][k - 1] + sums[i1 - 1][k - 1];
               p_sums[k] = p_sums[k - 1] + sum;
            }
            int even = 0, odd = 0;
            for(int j = 1; j <= n; j++) {
                if(p_sums[j] % 2 == 0) even++;
                else odd++;
            }
            res += even;
            res += even * (even - 1) / 2;
            res += odd * (odd - 1) / 2; 
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
