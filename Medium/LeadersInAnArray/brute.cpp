#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> LeadersInAnArray(vector<int> &arr) {
       int n=arr.size();
       if(n==1) return arr;
       vector<int> answer;
       answer.push_back(arr[n-1]);

       for(int j=n-2;j>=0;j--){
        if(arr[j]>answer.back()){
           answer.push_back(arr[j]);
        }
       }

       reverse(answer.begin(),answer.end());
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
    Solution finder;
    vector<int> answer = finder.LeadersInAnArray(arr);

    cout << "\nUnion of the two arrays is: ";
    for (int x : answer) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
