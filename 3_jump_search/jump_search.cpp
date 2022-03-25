#include<iostream>
using namespace std;

void print_array(int* arr, int size){
  cout << "Array: [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i==size-1 ? "]\n" : ", ");
  }
}

int main(){
  int arr[10], n, i, step=4, prev;

  cout << "Enter 10 Numbers in Followings:\n";
  for(i=0; i<10; i++){
    cout << "Number-" << i+1 << ": ";
    cin >> arr[i];
  }

  print_array(arr, 10);

  cout << "Enter Number to Find: ";
  cin >> n;

  // Find
  for(i=0; i<10; prev=i+1, i+=step){
    if(arr[i] >= n){
      break;
    }
  }

  // cout << "Number in Range : " << prev << " to " << i << '\n';
  while(prev <= i){
    if(arr[prev] == n){
      cout << "Element Found at Index " << prev << '\n';
      break;
    } else if(prev == i){
      cout << "Element Not Found\n";
    }
    prev++;
  }


  return 0;
}