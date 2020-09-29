#include <iostream>
#include <vector>

using namespace std;

void testcase() {
    int n, k;
    cin >> n >> k;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int curr_sum = cards[0];
    int i = 0, j = 0;
    int delta = abs(k - curr_sum);
    int res_i = i, res_j = j;
    while(j < n) {
        if(abs(k - curr_sum) < delta) {
            delta = abs(k - curr_sum);
            res_i = i;
            res_j = j;
        }
        // move window
        if(curr_sum > k) {
            curr_sum -= cards[i];
            i++;
        } else if (curr_sum < k) {
            j++;
            if(j < n) {
                curr_sum += cards[j];
            }
        } else {
            cout << res_i << " " << res_j << endl;
            return;
        }
    }
    cout << res_i << " " << res_j << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        testcase();
    }
}
