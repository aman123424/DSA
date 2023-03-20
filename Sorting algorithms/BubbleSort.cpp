#include <iostream>
using namespace std;

void bubbleSort(int arr[], int l, int r){
  int n = r - l + 1;

  int count = 0;

  while(count < n -1){
    for(int i = l; i < r - count; i++){
      if(arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
      }
    }
    count++;
  }
  
  return;
}

int main() {

  int arr[8] = {1, 6,2,5,2,8,4,3};

  bubbleSort(arr, 0, 7);

  for(int i = 0; i < 8; i++){
    cout<<arr[i]<<" ";
  }
}
