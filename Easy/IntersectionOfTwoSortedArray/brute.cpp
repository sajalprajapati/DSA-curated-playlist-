#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> IntersectionOfTwoSortedArrayFunction(vector<int> &arr, vector<int> &brr) {
        int n1 = arr.size(); // O(1)
        int n2 = brr.size(); // O(1)
        
        //intersection means finding corresponding element from one array to another array that is it ...
        vector<int> answer;
        vector<int> visited(n2,0); 

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(arr[i]==brr[j]&& visited[i]==0){
                    answer.push_back(arr[i]);
                    visited[i]=1;
                }

                if(brr[j]>arr[i]){break;}
            }
        }

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
    vector<int> answer = finder.IntersectionOfTwoSortedArrayFunction(arr, brr);

    cout << "\nUnion of the two arrays is: ";
    for (int x : answer) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
