#include <bits/stdc++.h>
using namespace std;

double raio;
double pi = 3.14159;

int main() {
    cin >> raio;

    double area = pi * raio * raio;

    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}