// ...existing code...
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    int partition(vector<int> &arr,int low,int high){
        int i = low + 1;
        int j = high;
        int pivot = arr[low];

        while(i <= j){
            while(i <= high && arr[i] <= pivot) i++;
            while(j >= low && arr[j] > pivot) j--;
            if(i < j) swap(arr[j], arr[i]);
        }

        swap(arr[j], arr[low]);
        return j;
    }

    void quickSort(vector<int>& arr,int low,int high){
        if(low < high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }
};

int main(){
    int sizeOfArray;
    cout << "Enter the size of the array: ";
    if(!(cin >> sizeOfArray) || sizeOfArray <= 0) return 0;

    vector<int> arr(sizeOfArray);
    cout << "Enter the elements in the array:\n";
    for(int i = 0; i < sizeOfArray; ++i) cin >> arr[i];

    Solution sol;
    sol.quickSort(arr, 0, sizeOfArray - 1);

    cout << "Sorted array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}