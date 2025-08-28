#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rearrangingArrayElements(vector<int>& arr){
        int n = arr.size();

        // Step 1: Partition (positives in front, negatives at end)
        int i = 0, j = 0;
        while(j < n){
            if(arr[j] > 0){
                swap(arr[i], arr[j]);
                i++;
            }
            j++;
        }
        // Now arr[0...i-1] = positives, arr[i...n-1] = negatives
        int pos = 0;
        int neg = i;  // first negative index

        // Step 2: Swap alternate positives with negatives
        while(pos < neg && neg < n){
            swap(arr[pos+1], arr[neg]);
            pos += 2;
            neg++;
        }
    }
};

int main(){
    int n;
    cout << "\nEnter the value of n: ";
    cin >> n;

    cout << "\nEnter the elements in the array: " << endl;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution sol;
    sol.rearrangingArrayElements(arr);

    cout << "\nArray after rearranging elements: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
