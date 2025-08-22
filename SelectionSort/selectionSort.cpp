#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6]={10,1,7,14,9,90};

   for(int i=0;i<n-1;i++){
     
     for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
     }
     
     //below is the code part that will display whole logic ...
     cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
   }

   
   cout<<"\n The array after the Selection sort is "<<endl;
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
}