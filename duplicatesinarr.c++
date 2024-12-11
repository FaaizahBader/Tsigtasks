#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool foundDuplicate = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break;
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
