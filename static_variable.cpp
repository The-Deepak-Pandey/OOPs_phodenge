#include <bits/stdc++.h>
using namespace std;

void func() {
    int x = 0;
    cout << "Inside func: " << x << endl;
    x++;
}

void func2() {
    static int y = 0; // Static variable retains its value between function calls
    cout << "Inside func2: " << y << endl;
    y++;
}

int main() {
    cout << "Calling func multiple times:" << endl;
    for (int i = 0; i < 3; i++) {
        func();
    }

    cout << "\nCalling func2 multiple times:" << endl;
    for (int i = 0; i < 3; i++) {
        func2();
    }

    return 0;
}