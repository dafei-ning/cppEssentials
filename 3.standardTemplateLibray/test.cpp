#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << (rand() % (100 - 20)) + 20 << endl;
    }

    return 0;
}