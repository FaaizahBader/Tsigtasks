#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 1000 are:" << endl;
    for (int num = 1; num <= 1000; num++) {
        int sum = 0;
        int temp = num;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
