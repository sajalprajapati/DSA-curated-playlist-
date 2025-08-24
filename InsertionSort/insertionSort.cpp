#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &nums) {
    int sizeOfArray = nums.size();

    for (int i = 1; i < sizeOfArray; i++) {
        int temp = nums[i];
        int j = i - 1;

        // Shift elements to the right until we find correct position for temp
        while (j >= 0 && nums[j] > temp) {
            nums[j + 1] = nums[j];
            j--;
        }

        // Place temp at the correct position
        nums[j + 1] = temp;

        // Debug: print array after each pass
        cout << "Pass " << i << ": ";
        for (int k = 0; k < sizeOfArray; k++) {
            cout << nums[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int sizeOfArray;
    cout << "\nEnter the size of the array: ";
    cin >> sizeOfArray;

    vector<int> arr;
    cout << "\nEnter the elements of the array: ";
    for (int i = 0; i < sizeOfArray; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // Print before sorting
    cout << "\nArray before sorting: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr);

    // Print after sorting
    cout << "\nArray after sorting: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
