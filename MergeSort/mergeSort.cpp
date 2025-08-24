#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> mergingDividedArray(vector<int> &arr, int low, int middle, int high) {
        vector<int> temp;
        int left = low;
        int right = middle + 1;

        while (left <= middle && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= middle) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return arr;
    }

    vector<int> mergeSort(vector<int> &arr, int low, int high) {

        if(low>=high){
            return arr;
        };
        int middle = low + (high - low) / 2;

        mergeSort(arr, low, middle);      // Divide left part
        mergeSort(arr, middle + 1, high); // Divide right part

        // Merge divided arrays
        mergingDividedArray(arr, low, middle, high);

        return arr;
    }

    vector<int> mergeSortCalling(vector<int> &arr) {
        int n = arr.size();
        mergeSort(arr, 0, n - 1);
        return arr;
    }
};

int main() {
   int sizeOfArray;
    cout << "\nEnter the size of the array: " << endl;
    cin >> sizeOfArray;

    vector<int> arr;
    cout << "\nEnter the elements in the array: ";
    for (int i = 0; i < sizeOfArray; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    Solution sol;
    vector<int> answer= sol.mergeSortCalling(arr);

    cout<<"\n Sorted array is: ";
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}