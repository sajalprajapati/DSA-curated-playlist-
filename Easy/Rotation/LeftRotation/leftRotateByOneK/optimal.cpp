#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    // Function to reverse part of the array
    void reverse(vector<int> &arr,int low,int high){
        while(low < high){
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    // Function to left rotate the array by k positions
    void leftRotatingArrayByk(vector<int> &arr,int k){
        int sizeOfArray = arr.size();

        // Edge case: if array is empty or k = 0, do nothing
        if(sizeOfArray == 0 || k == 0) return;

        // In case k > size, take modulo
        k = k % sizeOfArray;

        // Reverse the first k elements
        reverse(arr, 0, k - 1);

        // Reverse the remaining elements
        reverse(arr, k, sizeOfArray - 1);

        // Reverse the entire array
        reverse(arr, 0, sizeOfArray - 1);
    } 
};

int main(){
    int sizeOfArray;
    cout << "Enter the size of the array: ";
    cin >> sizeOfArray;

    vector<int> arr(sizeOfArray);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < sizeOfArray; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter how many times you want to rotate the array: ";
    cin >> k;

    Solution sol;
    sol.leftRotatingArrayByk(arr, k);

    cout << "Array after left rotation by " << k << " positions: ";
    for(int i = 0; i < sizeOfArray; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
