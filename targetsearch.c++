#include <iostream>
using namespace std;

int main() {
    int n, target, index =0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element to search: ";
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if (index != 0) {
        cout << "Target element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target element " << target << " not found in the array." << endl;
    }

    return 0;
}