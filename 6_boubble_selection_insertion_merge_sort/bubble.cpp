#include<iostream>
using namespace std;


// Print an Array
void print_array(int*arr, int size){
  cout << "Array(" << size << "): [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i < size - 1 ? ", " : "]\n");
  }
}

void bs(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
      for (int j=0; j<n-i-1; j++) {
        if (arr[j]>arr[j+1])
          swap(arr[j], arr[j+1]);
      }
    }
}

void bubbleSort(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
      cout << i << '\n';
      for (int j=0; j<n-i-1; j++) {
        cout << "<" << j << ", " << j+1 << "> | " << (arr[j]>arr[j+1] ? "SWAP" : "----") << " | <" << arr[j] << ", " << arr[j+1] << "> | ";
        if (arr[j]>arr[j+1])
          swap(arr[j], arr[j+1]);
        print_array(arr, n);
      }
    }
}

int main(){
  int arr[] = {9, 1, 5, 2, 4, 35,3, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  print_array(arr, size);
  bubbleSort(arr, size);

  return 0;
}