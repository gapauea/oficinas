// URI 1042
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int smaller = min(a, min(b, c));
    int greater = max(a, max(b, c));
    int mid = a+b+c-(smaller+greater);

    cout << smaller << endl;
    cout << mid << endl;
    cout << greater << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
