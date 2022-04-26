#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, i = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << i++ << ":" << endl;
        int r, c, k = 1;
        cin >> r;
        cin >> c;
        string sep, mid;
        for (int m = 0; m < c-1; m++) {
            sep = sep + "+-";
            mid = mid + "|.";
        }
        sep += "+";
        mid += "|";
        cout << "..";
        cout << sep << endl;
        cout << "..";
        cout << mid << endl;
        sep += "-+";
        mid += ".|";
        cout << sep << endl;
        for (int m = 0; m < r-1; m++) {
            cout << mid << endl;
            cout << sep << endl;
        }
    }
}
