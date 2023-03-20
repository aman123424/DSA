#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
  int n1 = mid - l + 1;
  int n2 = r - mid;

  //temp arrays
  int a[n1];
  int b[n2];

  for(int i = 0; i < n1; i++){
    a[i] = arr[l + i];
  }

  for(int i = 0; i < n2; i++){
    b[i] = arr[mid + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = l;

  while(i<n1 && j <n2){
    if(a[i] > b[j]){
      arr[k] = b[j];
      k++; j++;
    }else{
      arr[k] = a[i];
      k++; i++;
    }
  }

  while(j<n2){
    arr[k] = b[j];
    k++; j++;
  }

  while(i<n1){
    arr[k] = a[i];
    k++; i++;
  }
}

void mergeSort(int arr[], int l, int r){

  if(l<r){
    int mid = (l + r)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr, mid + 1, r);

    merge(arr, l,mid, r);
  }
  return;
}

int main() {

  int arr[7] = {1,2,5,2,8,4,3};

  mergeSort(arr, 0, 6);

  for(int i = 0; i < 7; i++){
    cout<<arr[i]<<" ";
  }
}
