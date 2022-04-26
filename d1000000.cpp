#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, i = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << i++ << ": ";
        float n, k, l = 1;
        vector<float> s;
        cin >> n;
        for (float i = 0; i < n; i++) {
            cin >> k;
            s.push_back(k);
        }
        sort(s.begin(), s.end());
        for (float i = 0; i < n; i++) {
            if (l <= s[i]) {
                l++;
            }
        }
        cout << l - 1 << endl;
    }
}
