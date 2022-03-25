#include<iostream>
using namespace std;

void print_array(int* arr, int size){
  cout << "Array: [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i==size-1 ? "]\n" : ", ");
  }
}

int main(){
  int arr[10], i, j;

  // Array Input
  cout << "Enter 10 Numbers in followings\n";
  for(i=0; i<10; i++){
    cout << "Number-" << i + 1 << ": ";
    cin >> arr[i];
  }

  print_array(arr, 10);

  // Sorting
  for(i=0; i<10; i++){
    for(j=i; j<10; j++){
      if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
      }
    }
  }

  print_array(arr, 10);

  return 0;
}