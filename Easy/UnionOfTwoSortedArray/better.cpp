#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionOfTwoSortedArrayFunction(vector<int> &arr, vector<int> &brr) {
        int n1 = arr.size(); // O(1)
        int n2 = brr.size(); // O(1)

        if (n1 == 0) return brr; // O(1)
        if (n2 == 0) return arr; // O(1)

        vector<int> answer;
        int i = 0, j = 0;

        // Traverse both arrays using two pointers
        while (i < n1 && j < n2) {
            if (arr[i] <= brr[j]) {
                if (answer.empty() || answer.back() != arr[i]) {
                    answer.push_back(arr[i]);
                }
                i++;
            } else {
                if (answer.empty() || answer.back() != brr[j]) {
                    answer.push_back(brr[j]);
                }
                j++;
            }
        }

        // Process remaining elements in arr
        while (i < n1) {
            if (answer.empty() || answer.back() != arr[i]) {
                answer.push_back(arr[i]);
            }
            i++;
        }

        // Process remaining elements in brr
        while (j < n2) {
            if (answer.empty() || answer.back() != brr[j]) {
                answer.push_back(brr[j]);
            }
            j++;
        }

        /*
        Time Complexity: O(n1 + n2)  
            - Each element of arr and brr is visited at most once.  
        Space Complexity: O(n1 + n2)  
            - To store the union in "answer".  
        */
        return answer;
    }
};

int main() {
    int n1;
    cout << "\nEnter the size of array 1: ";
    cin >> n1;

    cout << "Enter the elements in array 1 (sorted): ";
    vector<int> arr(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr[i];
    }

    int n2;
    cout << "\nEnter the size of array 2: ";
    cin >> n2;

    cout << "Enter the elements in array 2 (sorted): ";
    vector<int> brr(n2);
    for (int i = 0; i < n2; i++) {
        cin >> brr[i];
    }

    Solution finder;
    vector<int> answer = finder.unionOfTwoSortedArrayFunction(arr, brr);

    cout << "\nUnion of the two arrays is: ";
    for (int x : answer) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
