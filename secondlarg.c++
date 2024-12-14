#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(vector<int>& arr) {
    int largest = -1, secondLargest = -1;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    return (secondLargest == -1) ? -1 : secondLargest;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr);
    if (result == -1) {
        cout << "-1." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
