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

    vector<vector<int>> row_sums;
    for(int i = 0; i < n; i++) {
        vector<int> row;
        row.push_back(matr[i][0]);
        for(int j = 1; j < n; j++) {
           row.push_back(matr[i][j] + row[j - 1]); 
        }
        row_sums.push_back(row);
    }    
    // print_matr(row_sums, n);
    for(int j = 0; j < n; j++) {
        for(int i = 1; i < n; i++) {
            row_sums[i][j] += row_sums[i - 1][j];            
        }
    }
    int res = 0;
    // print_matr(row_sums, n);
    for(int i1 = 0; i1 < n; i1++) {
        for(int j1 = 0; j1 < n; j1++) {
            for(int i2 = i1; i2 < n; i2++) {
                for(int j2 = j1; j2 < n; j2++) {
                    int sum = 0;
                    sum += row_sums[i2][j2];
                    if(i1 != 0) sum -= row_sums[i1 - 1][j2];
                    if(j1 != 0) sum -= row_sums[i2][j1 - 1];
                    if(i1 != 0 && j1 != 0) sum += row_sums[i1 - 1][j1 - 1];
                    // calculate the sum
                    // int sum = 0;
                    // for(int k = i1; k <= i2; k++) {
                    //    for(int l = j1; l <= j2; l++) {
                    //        sum += matr[k][l];
                    //    }
                    //} 
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
