#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool counted = false; 
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                counted = true;
                break;
            }
        }
        if (!counted) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            cout << arr[i] << " appears " << count << (count > 1 ? " times." : " time.") << endl;
        }
    }

    return 0;
}
