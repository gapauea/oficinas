// URI 1042
#include <bits/stdc++.h>
using namespace std;

int original[3], sorted[3];

int main() {
    for (int i = 0; i < 3; i++) {
        cin >> original[i];
        sorted[i] = original[i];
    }

    sort(sorted, sorted+3);

    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }

    return 0;
}
