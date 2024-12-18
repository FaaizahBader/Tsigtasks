#include <iostream>
using namespace std;
int unionOfArrays(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
       if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1]) {
            j++;
            continue;
        }
        if (a[i] < b[j]) {
            result[k++] = a[i];
            i++;
        } else if (a[i] > b[j]) {
            result[k++] = b[j];
            j++;
        } else {
            result[k++] = a[i];
            i++;
            j++;
        }
    }
    while (i < n) {
        if (i > 0 && a[i] != a[i - 1]) {
            result[k++] = a[i];
        }
        i++;
    }
    while (j < m) {
        if (j > 0 && b[j] != b[j - 1]) {
            result[k++] = b[j];
        }
        j++;
    }

    return k;  
}

int main() {
    
    int n, m;

    
    cout << "Enter the size of the first array: ";
    cin >> n;
    int a[n];

    
    cout << "Enter the elements of the first array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    cout << "Enter the size of the second array: ";
    cin >> m;
    int b[m];

    
    cout << "Enter the elements of the second array (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    
    int result[n + m]; 

    int unionSize = unionOfArrays(a, n, b, m, result);

    cout << "Union of the two arrays: ";
    for (int i = 0; i < unionSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
