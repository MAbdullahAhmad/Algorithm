#include<iostream>
#include<algorithm>

using namespace std;

void print_array(int*arr, int size){
  cout << "Array: [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i < size - 1 ? ", " : "]\n");
  }
}


int main(){
  int *arr;
  arr = new int[4];
  
  arr[0] = 2;
  arr[1] = 11;
  arr[2] = 22;
  arr[3] = 23;

  reverse(arr, arr+4);

  do{
    print_array(arr, 4);
  } while(prev_permutation(arr, arr+4));
}