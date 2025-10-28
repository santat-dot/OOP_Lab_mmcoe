#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

               for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

     
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Select data type:\n";
    cout << "1. Integer\n2. Float\n3. Character\n";
    int choice;
    cin >> choice;

    cout << "Enter the elements in an array \n";

 
    if (choice == 1) {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        selectionSort(arr, n);

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    
    else if (choice == 2) {
        float arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        selectionSort(arr, n);

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }


    else if (choice == 3) {
        char arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        selectionSort(arr, n);

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    else {
        cout << "Invalid choice!";
    }

    cout << endl;
    return 0;
}


