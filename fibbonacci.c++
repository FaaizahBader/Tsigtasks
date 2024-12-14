#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;
    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }
    int a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
