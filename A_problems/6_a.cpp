#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string ns = to_string(n);
    if (ns.find("3") != string::npos || n % 3 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}