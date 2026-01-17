#include <iostream>
using namespace std;

int* makeArray(int n) {
    int arr[n];         // <-- something suspicious here
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    return arr;         // <-- and here...
}

void increment(int& x) {
    x++;
}

int main() {
    int* p = makeArray(5);

    cout << "Array contents: ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";    // <-- may explode
    }
    cout << endl;

    int* q = nullptr;
    increment(*q);              // <-- something VERY wrong here

    return 0;
}
