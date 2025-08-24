#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Merge two sorted parts of the array
    void merge(vector<int> &arr, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1;

        // Merge the two halves into temp
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        // Add remaining elements from the left half
        while (i <= mid) temp.push_back(arr[i++]);

        // Add remaining elements from the right half
        while (j <= right) temp.push_back(arr[j++]);

        // Copy sorted elements back to original array
        for (int k = left; k <= right; ++k) {
            arr[k] = temp[k - left];
        }
    }

    // Recursive merge sort function
    void mergeSort(vector<int> &arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    // Public function to sort array
    vector<int> sortArray(vector<int> &arr) {
        mergeSort(arr, 0, arr.size() - 1);
        return arr;
    }
};

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    Solution sol;
    sol.sortArray(arr);

    cout << "After Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
