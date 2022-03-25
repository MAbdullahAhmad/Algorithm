#include<iostream>
using namespace std;

// Print an Array
void print_array(int*arr, int size){
  cout << "Array: [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i < size - 1 ? ", " : "]\n");
  }
}

int binarySearch(int *arr, int start, int end, int num){
  int mid = (start + end) / 2;
  cout << start << " to " << end << " > " << mid << '\n';

  if(start > end) return -1;

  if(arr[mid] == num){
    return mid;
  }
  if(arr[mid] < num){
    return binarySearch(arr, mid+1, end, num);
  }
  if(arr[mid] > num){
    return binarySearch(arr, start, mid-1, num);
  }

  return -1;
}

int main(){
  int i, n, first, middle, last;
  int arr[10];

  // Input Array
  cout << "Enter 10 Nmbers in ascending order in Followings\n";
  for(i=0; i<10; i++){
    cout << "Number-" << i + 1 << ": ";
    cin >> arr[i];
  }

  print_array(arr, 10);

  // Get Number to Search
  cout << "Enter Number to Search in Array: ";
  cin >> n;

  i = binarySearch(arr, 0, 9, n);

  if(i==-1) cout << "Not Found!";
  else cout << "Found at Index " << i;
  cout << '\n';

  return 0;
}