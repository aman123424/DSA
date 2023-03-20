#include <iostream>
using namespace std;

void selectionSort(int arr[], int l, int r){
  for(int i = l; i < r; i++){
    int minIndex = i;
    for(int j = i + 1; j <= r; j++){
      if(arr[minIndex] > arr[j]){
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
  return;
}

int main() {

  int arr[8] = {1, 6,2,5,2,8,4,3};

  selectionSort(arr, 0, 7);

  for(int i = 0; i < 8; i++){
    cout<<arr[i]<<" ";
  }
}
