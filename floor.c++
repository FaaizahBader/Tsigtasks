#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1;
    int floorIndex = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            floorIndex = mid; 
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return floorIndex;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    int floorIndex = findFloor(arr, n, target);

    if (floorIndex == -1) {
        cout << "No floor exists for the target in the array." << endl;
    } else {
        cout << "The floor of " << target << " is " << arr[floorIndex] << " at index " << floorIndex << "." << endl;
    }
    return 0;
}