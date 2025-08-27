#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> unionOfTwoSortedArrayFunction(vector<int> &arr, vector<int> &brr) {
        int n1 = arr.size(); // O(1)
        int n2 = brr.size(); // O(1)

        if (n1 == 0) { return brr; } // O(1)
        else if (n2 == 0) { return arr; } // O(1)

        set<int> unionSet; // stores unique elements
        vector<int> answer;

        // Insert all elements of arr into set
        for (auto element : arr) {
            unionSet.insert(element); // O(log(n1+n2)) per insert
        }

        // Insert all elements of brr into set
        for (auto element : brr) {
            unionSet.insert(element); // O(log(n1+n2)) per insert
        }

        // Copy all elements from set to answer
        for (auto unionElement : unionSet) {
            answer.push_back(unionElement); // O(1) per push
        }

        /*
        Time Complexity:
            O(n1 * log(n1+n2)) + O(n2 * log(n1+n2)) + O(n1+n2)
            ≈ O((n1+n2) * log(n1+n2))

        Space Complexity:
            O(n1+n2)   (for set + answer vector)
        */

        return answer;
    }
};

int main() {
    int n1;
    cout << "\n enter the size of an array 1" << endl;
    cin >> n1;

    cout << "\n enter the elements in an array 1 " << endl;
    vector<int> arr;
    for (int i = 0; i < n1; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    int n2;
    cout << "\n enter the size of an array 2 " << endl;
    cin >> n2;

    cout << "\n enter the elements in an array 2" << endl;
    vector<int> brr;
    for (int i = 0; i < n2; i++) {
        int element;
        cin >> element;
        brr.push_back(element);
    }

    Solution finder;
    vector<int> answer = finder.unionOfTwoSortedArrayFunction(arr, brr);

    cout << "Union of the two arrays is: ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
}
