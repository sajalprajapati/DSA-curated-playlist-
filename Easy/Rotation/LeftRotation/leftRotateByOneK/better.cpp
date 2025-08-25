#include<iostream>  // O(1)
#include<vector>    // O(1)
using namespace std;

class Solution{
    public:

    void leftRotateByK(vector<int> &arr, int k){
       int sizeOfarray = arr.size();  // O(1)

       if(sizeOfarray == 0 || (sizeOfarray == 1 && k == 1)){  
        // O(1) → Constant-time condition check
        return;
       }
      
       vector<int> temporaryArray;  // O(1) for declaration (but will take O(n) extra space eventually)

       // Copy elements from index k to end → O(n - k)
       for(int i = k; i < sizeOfarray; i++){ 
            temporaryArray.push_back(arr[i]);  // O(1) per insertion → O(n - k)
       }

       // Copy first k elements → O(k)
       for(int i = 0; i < k; i++){
            temporaryArray.push_back(arr[i]);  // O(1) per insertion → O(k)
       }

       /*
       cout<<"\n printing the temporary array"<<endl;
       for(int i=0;i<temporaryArray.size();i++){
            cout<<temporaryArray[i]<<" ";   // This loop → O(n), but commented out, so ignored.
       }
       */

       // Replace original array elements with rotated array → O(n)
       for(int i = 0; i < temporaryArray.size(); i++){
            arr[i] = temporaryArray[i];  // O(1) per assignment → O(n)
       }
    }
};

int main(){
    int sizeOfArray;
    cout<<"\n enter the size of an array"<<endl;
    cin >> sizeOfArray;  // O(1)

    cout<<"\n enter the elements in an array"<<endl;
    vector<int> arr;  // O(1)
    for(int i = 0; i < sizeOfArray; i++){   // O(n)
        int element;
        cin >> element;  // O(1)
        arr.push_back(element);  // O(1) per push → O(n)
    }
 
    int k;
    cout<<"\n enter how many times do you want to rotate an array"<<endl;
    cin >> k;  // O(1)

    Solution sol;
    sol.leftRotateByK(arr, k);  // O(n) time, O(n) extra space

    cout<<"\n array elements are "<<endl;
    for(int i = 0; i < sizeOfArray; i++){  // O(n)
        cout << arr[i] << " ";  // O(1) per print → O(n)
    }
}
