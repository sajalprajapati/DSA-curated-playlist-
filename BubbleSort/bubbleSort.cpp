#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6]={10,1,7,n,14,9};

    //we are implementing the bubble sort....
    for(int i=1;i<n;i++) {//<------in bubble sort the number of rounds we perform is n-1.....
       bool swapped=false;
        for(int j=0;j<n-i;j++){ //<---- in bubble sort ,we compare adjacent elements in this loop....
          if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=true;
          }
        }


        if(swapped==false){
          break;
        }
    }

    
}