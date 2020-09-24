#include <iostream>
#include <set>

using namespace std;

void test() {
    set<int> res;
    int n; cin >> n;
    
    for(int i = 0; i < n; ++i) {
        bool is_delete; cin >> is_delete;
        int num; cin >> num;
        if(!is_delete) {
            res.insert(num);
        } else {
            res.erase(num);
        }
    } 
    if (res.empty()) cout << "Empty";
    else for(auto num: res) cout << num << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int i = 0; i < t; ++i) {
        test();
    }
}
