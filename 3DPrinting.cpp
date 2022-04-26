#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, i = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << i++ << ": ";
        float cf, mf, yf, kf;
        float c1, m1, y1, k1;
        cin >> cf;
        cin >> mf;
        cin >> yf;
        cin >> kf;
        for (int i = 0; i < 2; i++) {
            cin >> c1;
            cin >> m1;
            cin >> y1;
            cin >> k1;
            cf = min(cf, c1);
            mf = min(mf, m1);
            yf = min(yf, y1);
            kf = min(kf, k1);
        }
        float ma = pow(10.0f, 6.0f);
        if (cf + mf + yf + kf >= ma) {
            printf("%.0f ", min(ma, cf));
            ma -= cf;
            if (ma > 0) {
                printf("%.0f ", min(ma, mf));
                ma -= mf;
            }
            else
                cout << 0 << " ";
            if (ma > 0) {
                printf("%.0f ", min(ma, yf));
                ma -= yf;
            }
            else
                cout << 0 << " ";
            if (ma > 0) {
                printf("%.0f ", min(ma, kf));
                ma -= kf;
            }
            else
                cout << 0 << " ";
        }
        else {
            cout << "IMPOSSIBLE";
        }
        cout << endl;
    }
}
