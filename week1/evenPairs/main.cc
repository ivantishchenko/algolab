#include <iostream>
#include <vector>

using namespace std;

void testcase() {
    int n; 
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        nums.push_back(x);                         
    }
    vector<int> sums;
    sums.push_back(nums[0]);
    for(int i = 1; i < n; i++) {
        sums.push_back(nums[i] + sums[i - 1]);                 
    }
    int sum_even = 0;
    int sum_odd = 0;
    for(int i = 0; i < n; i++) {
        if(sums[i] % 2 == 0) sum_even++;
        else sum_odd++;
    }
    int res = sum_even + sum_even * (sum_even - 1) / 2 + sum_odd * (sum_odd - 1) / 2;
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

