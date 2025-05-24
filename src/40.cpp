#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2) {
            cout << "Number: " << i << endl;
        }
    } else {
        cout << "Not even" << endl;
    }
    return 0;
}
